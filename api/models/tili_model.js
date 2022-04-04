const db = require('../../database');


const Tili={
  getAll: function(callback) {
    return db.query('select * from Tili', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Tili where idTili=?', [id], callback);
  },
  add: function(Tili, callback) {
    return db.query(
      'insert into Tili (Tilinumero, Saldo, Credit, idTilitapahtumat) values(?,?,?,?)',
      [Tili.Tilinumero, Tili.Saldo, Tili.Credit, Tili.idTilitapahtumat],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Tili where idTili=?', [id], callback);
  },
  update: function(id, Tili, callback) {
    return db.query(
      'update Tili set Tilinumero=?, Saldo=?, Credit=?, idTilitapahtumat=? where idTili=?',
      [Tili.Tilinumero, Tili.Saldo, Tili.Credit, Tili.idTilitapahtumat, id],
      callback
    );
  }

};
          
module.exports = Tili;