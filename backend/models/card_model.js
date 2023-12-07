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
  },
  getIdAccount: function(id, callback) {
    return db.query('select * from card where cardNumber=?', [id], callback);
  },
  getName: function(id, callback) {
    return db.query('select card.cardNumber, concat(customer.fname," ", customer.lname) as name from card join account on account.idaccount=card.idaccount inner join customer on account.idcustomer=customer.idcustomer where cardNumber=?', [id], callback);
  },
  getAccountType: function(id, callback) {
    return db.query('select accountType from account where idaccount=?', [id], callback);
  },
  getIdcard: function(id, callback) {
    return db.query('select idcard from card where idaccount=?', [id], callback);
  }
}
          
module.exports = card;