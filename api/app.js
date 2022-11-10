var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
const jwt = require('jsonwebtoken');

function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]

    console.log("token = "+token);
    if (token == null) return res.sendStatus(401)

    jwt.verify(token, process.env.MY_TOKEN, (err, Kortinnumero) => {
      console.log(err)

      if (err) return res.sendStatus(403)

      req.user = Kortinnumero

      next()
    })
  }

var loginRouter = require ('./routes/login');
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

app.use('/login', loginRouter);//login is not protected 

app.use(authenticateToken);
app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili_has_asiakas', tili_has_asiakasRouter);
app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);

module.exports = app;