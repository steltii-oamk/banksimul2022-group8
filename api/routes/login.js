const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.Kortinnumero && request.body.PIN){
      const Kortinnumero = request.body.Kortinnumero;
      const PIN = request.body.PIN;
        login.checkPassword(Kortinnumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PIN,dbResult[0].PIN, function(err,compareResult) {
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
              console.log("Korttia ei ole olemassa");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("Väärä kortinnumero tai väärä PIN");
      response.send(false);
    }
  }
);

module.exports=router;