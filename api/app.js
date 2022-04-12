var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');

var asiakasRouter = require('./routes/asiakas');
var korttiRouter = require('./routes/kortti');
var tili_has_asiakasRouter = require('./routes/tili_has_asiakas');
var tiliRouter = require('./routes/tili');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));
app.use(helmet());
app.use(cors());

app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili_has_asiakas', tili_has_asiakasRouter);
app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);

module.exports = app;
