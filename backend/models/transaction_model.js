const db = require('../database.js');

const transaction={
  getAll: function(callback) {
    return db.query('select * from transaction', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from transaction where idtransaction=?', [id], callback);
  },
  getByAccountId: function(id, callback) {
    return db.query('select * from transaction where idaccount=? order by dateTime desc limit 5', [id], callback);
  },
  getByAccountId2: function(id, callback) {
    return db.query('select * from transaction where idaccount=? order by dateTime desc limit 5 offset 5', [id], callback);
  },
  getByAccountId3: function(id, callback) {
    return db.query('select * from transaction where idaccount=? order by dateTime desc limit 5 offset 10', [id], callback);
  },
  getByAccountId4: function(id, callback) {
    return db.query('select * from transaction where idaccount=? order by dateTime desc limit 5 offset 15', [id], callback);
  },
  addTransaction: function(transaction, callback) {
    return db.query('insert into transaction (transactionType, amount, idaccount, idcard) values(?,?,?,?)',
    [transaction.transactionType, transaction.amount, transaction.idaccount, transaction.idcard], callback);
  },
  delete: function(id, callback) {
    return db.query('delete from transaction where idtransaction=?', [id], callback);
  },
  update: function(id, transaction, callback) {
    return db.query('update transaction set transactionType=?, dateTime=?, amount=?, idaccount=?, idcard=? where idtransaction=?',
    [transaction.transactionType, transaction.dateTime, transaction.amount, transaction.idaccount, transaction.idcard, id], callback);
  },
  addCredit: function(transaction, callback) {
    return db.query('CALL credit_transfer(?,?,?)', // TÄMÄ ON CREDIT, ELI SALDO VOI MENNÄ MIINUKSELLE
    [transaction.first_id, transaction.amount, transaction.idcard], callback);
  },
  addDebit: function(transaction, callback) {
    return db.query('CALL debit_transfer(?,?,?)', // TÄMÄ ON DEBIT
    [transaction.first_id, transaction.amount, transaction.idcard], callback);
  }
};
          
module.exports = transaction;