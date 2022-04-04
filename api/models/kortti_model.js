const db = require('../database');


const Kortti={
  getAll: function(callback) {
    return db.query('select * from Kortti', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Kortti where idKortti=?', [id], callback);
  },
  add: function(Kortti, callback) {
    return db.query(
      'insert into Kortti (Kortinnumero, PIN, Voimassaolo, idTili) values(?,?,?,?)',
      [Kortti.Kortinnumero, Kortti.PIN, Kortti.Voimassaolo, Kortti.idTili],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Kortti where idKortti=?', [id], callback);
  },
  update: function(id, Kortti, callback) {
    return db.query(
      'update Kortti set Kortinnumero=?, PIN=?, Voimassaolo=?, idTili=? where idKortti=?',
      [Kortti.Kortinnumero, Kortti.PIN, Kortti.Voimassaolo, Kortti.idTili, id],
      callback
    );
  }

};
          
module.exports = Kortti;