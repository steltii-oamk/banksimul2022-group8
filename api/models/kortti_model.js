const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const Kortti={
  getAll: function(callback) {
    return db.query('select * from Kortti', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Kortti where idKortti=?', [id], callback);
  },
  add: function(Kortti, callback) {
    bcrypt.hash(Kortti.PIN, saltRounds, function(err, hashed_PIN) {
      return db.query('insert into Kortti (Kortinnumero, PIN, Voimassaolo, idTili) values(?,?,?,?)',
      [Kortti.Kortinnumero, hashed_PIN, Kortti.Voimassaolo, Kortti.idTili],callback)
    });
  },
  delete: function(id, callback) {
    return db.query('delete from Kortti where idKortti=?', [id], callback);
  },
  update: function(id, Kortti, callback) {
    bcrypt.hash(Kortti.PIN, saltRounds, function(err, hashed_PIN) {
      return db.query('update Kortti set Kortinnumero=?, PIN=?, Voimassaolo=?, idTili=? where idKortti=?',
      [Kortti.Kortinnumero, hashed_PIN, Kortti.Voimassaolo, Kortti.idTili, id], callback)
    });
  }

}
          
module.exports = Kortti;