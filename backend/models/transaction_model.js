const db = require('../database.js');

const transaction={
  getAll: function(callback) {
    return db.query('select * from transaction', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from transaction where idtransaction=?', [id], callback);
  },
  add: function(transaction, callback) {
    return db.query('insert into transaction (transactionType, dateTime, amount, idaccount, idcard) values(?,NOW(),?,?,?)',
    [transaction.transactionType, transaction.dateTime, transaction.amount, transaction.idaccount, transaction.idcard], callback);
  },
  delete: function(id, callback) {
    return db.query('delete from transaction where idtransaction=?', [id], callback);
  },
  update: function(id, transaction, callback) {
    return db.query('update transaction set transactionType=?, dateTime=NOW(), amount=?, idaccount=?, idcard=? where idtransaction=?',
    [transaction.transactionType, transaction.dateTime, transaction.amount, transaction.idaccount, transaction.idcard, id], callback);
  }
};
          
module.exports = transaction;