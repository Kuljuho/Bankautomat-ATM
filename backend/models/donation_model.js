const db = require('../database.js');

const donation={
  getAll: function(callback) {
    return db.query('select * from donation', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from donation where iddonation=?', [id], callback);
  },
  add: function(account, callback) {
    return db.query('insert into donation (amount, recipient, idTransaction) values(?,?,?)',
    [donation.amount, donation.recipient, donation.idTransaction], callback);
  },
  makeDonation: function(transaction, callback) {
    return db.query('CALL debit_transfer(?,?,?)', // TÄMÄ ON DEBIT
    [donation.first_id, donation.amount, donation.idcard], callback);
  },
  delete: function(id, callback) {
    return db.query('delete from donation where iddonation=?', [id], callback);
  },
  update: function(id, account, callback) {
    return db.query('update donation set amount=?, recipient=?, idTransaction=? where iddonation=?',
    [donation.amount, donation.recipient, donation.idTransaction, id], callback);
  }
};
          
module.exports = donation;