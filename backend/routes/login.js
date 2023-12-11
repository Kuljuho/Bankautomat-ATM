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
              if (dbResult[0].cardLocked) {
                console.log("Account locked");
                response.send("Account locked");
                return;
              }

              bcrypt.compare(pin, dbResult[0].pin, function(err, compareResult) {
                if(compareResult) {
                  console.log("Success");
                  login.resetAttempts(cardNumber);
                  const token = generateAccessToken({ cardNumber });
                  response.send(token);
                }
                else {
                  console.log("Wrong pin");
                  login.incrementAttempts(cardNumber, function(err, lockResult) {
                    if (lockResult === "locked") {
                      response.send("Account locked");
                    } else {
                      response.send(false);
                    }
                  });
                }
              });
            }
            else{
              console.log("User does not exist");
              response.send(false);
            }
          }
        })
}});

function generateAccessToken(cardNumber){
  return jwt.sign(cardNumber, process.env.MY_TOKEN, {expiresIn: '2000s'});
}

module.exports=router;