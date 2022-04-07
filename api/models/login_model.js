const db = require('../database');

const login={
  checkPassword: function(username, callback) {
      return db.query('SELECT PIN FROM kortti WHERE Kortinnumero = ?',[username], callback); 
    }
};
          
module.exports = login;