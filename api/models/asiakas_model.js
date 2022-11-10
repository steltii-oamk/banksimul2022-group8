const db = require('../database');

const Asiakas={
  getAll: function(callback) {
    return db.query('select * from Asiakas', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Asiakas where idAsiakas=?', [id], callback);
  },
  add: function(Asiakas, callback) {
    return db.query(
      'insert into Asiakas (Etunimi, Sukunimi, Osoite, Puhelinnumero, idKortti) values(?,?,?,?,?)',
      [Asiakas.Etunimi, Asiakas.Sukunimi, Asiakas.Osoite, Asiakas.Puhelinnumero, Asiakas.idKortti],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Asiakas where idAsiakas=?', [id], callback);
  },
  update: function(id, Asiakas, callback) {
    return db.query(
      'update Asiakas set Etunimi=?, Sukunimi=?, Osoite=?, Puhelinnumero=?, idKortti=? where idAsiakas=?',
      [Asiakas.Etunimi, Asiakas.Sukunimi, Asiakas.Osoite, Asiakas.Puhelinnumero, Asiakas.idKortti, id],
      callback
    );
  }

};
          
module.exports = Asiakas;