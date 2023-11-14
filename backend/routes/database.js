const mysql = require('mysql2');
const connection = msql.createPool({
    host: '127.0.0.1',
    user: 'root',
    password: 'poorbank',
    database: 'bank'
});
module.exports = connection;