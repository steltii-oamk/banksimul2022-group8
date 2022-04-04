var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const db = require ('database');

var asiakasRouter = require('./routes/asiakas');
var korttiRouter = require('./routes/');
var tili_has_asiakasRouter = require('./routes/tili_has_asiakas');
var tiliRouter = require('./routes/tili');
var tilitaphtumatRouter = require('./routes/tilitapahtumat');

var app = express();

/*const basicAuth = require('express-basic-auth');
app.use(basicAuth({users: { 'admin': '1234' }}))
app.use(basicAuth({
    authorizer: myAuthorizer,
    authorizeAsync: true,
}))
const dotenv = require('dotenv');
dotenv.config();
var auth_username='admin';
var auth_password='1234';
function myAuthorizer(username, password, cb){
    if(username===auth_username && password ===auth_password){
        return cb(null, true);
    }
    else{
        return cb(null, false);
    }
}*/

const helmet = require('helmet');
const cors = require('cors');

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili_has_asiakas', tili_has_asiakasRouter);
app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);

/*function myAuthorizer(username, password,cb){
    db.query('SELECT password FROM user_table WHERE username = ?',[username], 
      function(dbError, dbResults, fields) {
        if(dbError){
              response.json(dbError);
            }
        else {
          if (dbResults.length > 0) {
            bcrypt.compare(password,dbResults[0].password, 
              function(err,res) {
                if(res) {
                  console.log("succes");
                  return cb(null, true);
                }
                else {
                  console.log("wrong password");
                  return cb(null, false);
                }			
                response.end();
              }
            );
          }
          else{
            console.log("user does not exists");
            return cb(null, false);
          }
        }
      }
    );
  }
*/

module.exports = app;
