const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.username && request.body.password){
      const Kortinnumero = request.body.username;
      const PIN = request.body.password;
        login.checkPIN(Kortinnumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PIN,dbResult[0].password, function(err,compareResult) {
                if(compareResult) {
                  console.log("PIN oikein");
                  response.send(true);
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

module.exports=router;