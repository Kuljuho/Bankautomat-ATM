const db = require('../database.js');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const card={
  getAll: function(callback) {
    return db.query('select * from card', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from card where idcard=?', [id], callback);
  },
  add: function(card, callback) {
    bcrypt.hash(card.pin, saltRounds, function(err, hash) {
      return db.query('insert into card (cardNumber, pin, idaccount) values(?,?,?)',
      [card.cardNumber, hash, card.idaccount], callback);
    });
  },
  delete: function(id, callback) {
    return db.query('delete from card where idcard=?', [id], callback);
  },
  update: function(id, card, callback) {
    bcrypt.hash(card.pin, saltRounds, function(err, hash) {
      return db.query('update card set cardNumber=?, pin=?, idaccount=? where idcard=?',
      [card.cardNumber, hash, idaccount, id], callback);
    });
  },
  checkPin:function(cardNumber, callback){
    return db.query('select pin from card where cardNumber=?',[cardNumber],callback);
  }

}
          
module.exports = card;