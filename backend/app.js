var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var indexRouter = require('./routes/index');
var cardRouter = require('./routes/card');

var app = express();
const port = 3000;
app.listen(port, function(){
    console.log("Kuuntelen porttia 3000");
});

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/card', cardRouter);

module.exports = app;