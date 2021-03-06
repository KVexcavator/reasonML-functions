// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';


function discount(percent, prise) {
  var amount = prise * percent / 100.0;
  return prise - amount;
}

function halfOff(param) {
  return discount(50.0, param);
}

function tenPercentOff(param) {
  return discount(10.0, param);
}

var amount = 30.0 * 5.0 / 100.0;

console.log("Pure cost discount 5%, prise 30$: ", 30.0 - amount);

var amount$1 = 30.0 * 50.0 / 100.0;

console.log("Pure cost discount 50%, prise 30$: ", 30.0 - amount$1);

var amount$2 = 30.0 * 10.0 / 100.0;

console.log("Pure cost discount 10%, prise 30$: ", 30.0 - amount$2);

exports.discount = discount;
exports.halfOff = halfOff;
exports.tenPercentOff = tenPercentOff;
/*  Not a pure module */
