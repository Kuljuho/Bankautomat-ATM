const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/card_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');

dotenv.config();

router.post('/', 
  function(request, response) {
    if(request.body.cardNumber && request.body.pin){
      const cardNumber = request.body.cardNumber;
      const pin = request.body.pin;

        login.checkPin(cardNumber, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(pin,dbResult[0].pin, function(err,compareResult) {
                if(compareResult) {
                  console.log("Success");
                  const token = generateAccessToken({ cardNumber });
                  response.send(token);
                }
                else {
                    console.log("Wrong pin");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("User does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("CardNumber or pin missing");
      response.send(false);
    }
  }
);

function generateAccessToken(cardNumber){
  return jwt.sign(cardNumber, process.env.MY_TOKEN, {expiresIn: '2000s'});
}

module.exports=router;