const express = require('express');
const router = express.Router();
const donation = require('../models/donation_model');

router.get('/',
    function (request, response) {
        donation.getAll(function (err, dbResult) {
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
        donation.getById(request.params.id, function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult);
            }
        })
    });

router.post('/:id', 
    function(request, response) {
        donation.add(request.body, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(request.body);
        }
        });
    });

router.post('/makeDonation', 
    function(request, response) {
        donation.makeDonation(request.body, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(dbResult.affectedRows);
        }
        });
    });

router.delete('/:id', 
    function(request, response) {
        donation.delete(request.params.id, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(dbResult);
        }
        });
    });


router.put('/:id', 
    function(request, response) {
        donation.update(request.params.id, request.body, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(dbResult);
        }
        });
    });

module.exports = router;