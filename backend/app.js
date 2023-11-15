var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var cardRouter = require('./routes/card');
var customerRouter = require('./routes/customer');
var accountRouter = require('./routes/account');
var loginRouter = require('./routes/login');
var transactionRouter = require('./routes/transaction');

var app = express();
const port = 3000;
app.listen(port, function(){
    console.log("Kuuntelen porttia 3000");
});


//Tämä lukee verkkosivulla testinä
app.get('/', function(req, res){
    res.send('Hello World!');
});

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/card', cardRouter);
app.use('/customer', customerRouter);
app.use('/account', accountRouter);
app.use('/login', loginRouter);
app.use('/transaction', transactionRouter);


module.exports = app;
