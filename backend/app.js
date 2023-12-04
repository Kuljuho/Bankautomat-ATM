var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

const jwt = require('jsonwebtoken');

var indexRouter = require('./routes/index');
var cardRouter = require('./routes/card');
var customerRouter = require('./routes/customer');
var accountRouter = require('./routes/account');
var loginRouter = require('./routes/login');
var transactionRouter = require('./routes/transaction');
var getIdAccountRouter = require('./routes/getAccount');
var getNameRouter = require('./routes/getName');
var getAccountTypeRouter = require('./routes/getAccountType');

var app = express();
const port = 3000;


app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));


app.use('/', indexRouter);
app.use('/card', cardRouter);
app.use('/getidaccount', getIdAccountRouter);
app.use('/getname',getNameRouter);
app.use('/getaccounttype',getAccountTypeRouter);
app.use('/login', loginRouter);
app.use(authenticateToken);
app.use('/customer', customerRouter);
app.use('/account', accountRouter);
app.use('/transaction', transactionRouter);

function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]
  
    console.log("token = "+token);
    if (token == null) return res.sendStatus(401)
  
    jwt.verify(token, process.env.MY_TOKEN, (err, cardNumber) => {
      console.log(err)
  
      if (err) return res.sendStatus(403)
  
      req.cardNumber = cardNumber
  
      next()
    })
  }



module.exports = app;
