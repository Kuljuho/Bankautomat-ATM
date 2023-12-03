const express = require('express');
const router = express.Router();
const card = require('../models/card_model');

router.get('/:id',
    function (request, response) {
        card.getAccountType(request.params.id, function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult[0]);
            }
        })
    });

module.exports = router;