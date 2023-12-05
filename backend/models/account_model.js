const db = require('../database.js');

const account={
  getAll: function(callback) {
    return db.query('select * from account', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from account where idaccount=?', [id], callback);
  },
  getByCustomerId: function(id, callback) {
    return db.query('select * from account where idaccount=?', [id], callback);
  },
  getByCreditCustomerId: function(id, callback) {
    return db.query('select * from account where idcustomer=? limit 1', [id], callback);
  },
  //Testi
  getByCreditCustomerId2: function(id, callback) {
    return db.query('select * from account where idcustomer=? limit 1,1', [id], callback);
  },
  getBalanceById: function(id, callback) {
    return db.query('select balance from account where idaccount=?', [id], callback);
  },
  add: function(account, callback) {
    return db.query('insert into account (accountNumber, accountType, balance, idcustomer) values(?,?,?,?)',
    [account.accountNumber, account.accountType, account.balance, account.idcustomer], callback);
  },
  delete: function(id, callback) {
    return db.query('delete from account where idaccount=?', [id], callback);
  },
  update: function(id, account, callback) {
    return db.query('update account set accountNumber=?, accountType=?, balance=?, idcustomer=? where idaccount=?',
    [account.accountNumber, account.accountType, account.balance, account.idcustomer, id], callback);
  }
};
          
module.exports = account;