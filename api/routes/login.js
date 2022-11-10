const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');

router.post('/', 
  function(request, response) {
    if(request.body.Kortinnumero && request.body.PIN){
      const Kortinnumero = request.body.Kortinnumero;
      const PIN = request.body.PIN;

        login.checkPIN(Kortinnumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              console.log(PIN);
              console.log(dbResult);
              bcrypt.compare(PIN,dbResult[0].PIN, function(err,compareResult) {
                /*if(true){*/if(compareResult) {
                  console.log("PIN oikein");
                  const token = generateAccessToken({ Kortinnumero: Kortinnumero });
                  response.send(token);
                }
                else {
                    console.log("Väärä PIN");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("käyttäjää ei ole olemassa");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("käyttäjä tai PIN puuttuu");
      response.send(false);
    }
  }
);

function generateAccessToken(Kortinnumero) {
  dotenv.config();
  return jwt.sign(Kortinnumero, process.env.MY_TOKEN, { expiresIn: '1800000s' });
}

module.exports=router;