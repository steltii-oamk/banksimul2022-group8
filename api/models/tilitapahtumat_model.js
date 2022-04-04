const db = require('../database');


const Tilitapahtumat={
  getAll: function(callback) {
    return db.query('select * from Tilitapahtumat', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Tilitapahtumat where idTilitapahtumat=?', [id], callback);
  },
  add: function(Tilitapahtumat, callback) {
    return db.query(
      'insert into Tilitapahtumat (Tilinumero, Kortinnumero, PVMKLO, Tapahtuma, Summa) values(?,?,?,?,?)',
      [Tilitapahtumat.Tilinumero, Tilitapahtumat.Kortinnumero, Tilitapahtumat.PVMKLO, Tilitapahtumat.Tapahtuma, Tilitapahtumat.Summa],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Tilitapahtumat where idTilitapahtumat=?', [id], callback);
  },
  update: function(id, Tilitapahtumat, callback) {
    return db.query(
      'update Tilitapahtumat set Tilinumero=?, Kortinnumero=?, PVMKLO=?, Tapahtuma=?, Summa=? where idTilitapahtumat=?',
      [Tilitapahtumat.Tilinumero, Tilitapahtumat.Kortinnumero, Tilitapahtumat.PVMKLO, Tilitapahtumat.Tapahtuma, Tilitapahtumat.Summa, id],
      callback
    );
  }

};
          
module.exports = Tilitapahtumat;