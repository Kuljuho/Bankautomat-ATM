const express = require('express');
const router = express.Router();
const account = require('../models/account_model');

router.get('/',
    function (request, response) {
        account.getAll(function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                console.log(dbResult);
                response.json(dbResult);
            }
        })
    });

router.get('/:id',
    function (request, response) {
        account.getById(request.params.id, function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult);
            }
        })
    });

router.get('/customer/:id',
    function (request, response) {
        account.getByCustomerId(request.params.id, function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult);
            }
        })
    });

router.get('/creditCustomer/:id',
    function (request, response) {
        account.getByCreditCustomerId(request.params.id, function (err, dbResult1) {
            if (err) {
                response.json(err);
                return;
            }

        account.getByCreditCustomerId2(request.params.id, function (err, dbResult2) {
            if (err) {
                    response.json(err);
                    return;
                }
                response.json({
                    result1: dbResult1[0].idaccount,
                    result2: dbResult2[0].idaccount
                });
        });
    });
  });


router.get('/saldo/:id',
    function (request, response) {
        account.getBalanceById(request.params.id, function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult[0]);
            }
        })
    });

router.post('/', 
function(request, response) {
  account.add(request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(request.body);
    }
  });
});

router.delete('/:id', 
function(request, response) {
  account.delete(request.params.id, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});


router.put('/:id', 
function(request, response) {
  account.update(request.params.id, request.body, function(err, dbResult) {
    if (err) {
      response.json(err);
    } else {
      response.json(dbResult);
    }
  });
});

module.exports = router;