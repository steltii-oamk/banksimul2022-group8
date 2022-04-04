const db = require('../database');


const Tili_has_Asiakas={
  getAll: function(callback) {
    return db.query('select * from Tili_has_Asiakas', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from Tili_has_Asiakas where idTili_has_Asiakas=?', [id], callback);
  },
  add: function(Tili_has_Asiakas, callback) {
    return db.query(
      'insert into Tili_has_Asiakas (idTili) values(?)',
      [Tili_has_Asiakas.idOpintojakso],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from Tili_has_Asiakas where idTili_has_Asiakas=?', [id], callback);
  },
  update: function(id, Tili_has_Asiakas, callback) {
    return db.query(
      'update Tili_has_Asiakas set idTili=? where idTili_has_Asiakas=?',
      [Tili_has_Asiakas.idOpintojakso, id],
      callback
    );
  }

};
          
module.exports = Tili_has_Asiakas;