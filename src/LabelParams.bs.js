// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';


function payment(p, apr, years) {
  var r = apr / 12.0 / 100.0;
  var n = Math.imul(years, 12);
  var powerTerm = Math.pow(1.0 + r, n);
  return p * (r * powerTerm) / (powerTerm - 1.0);
}

var amount = payment(10000.0, 5.0, 30);

console.log("Anount per month for loan 1: $", amount.toFixed(2));

var amount$1 = payment(25000.0, 7.5, 15);

console.log("Amount per month for loan 2: $", amount$1.toFixed(2));

exports.payment = payment;
exports.amount = amount$1;
/* amount Not a pure module */
