let payment = (principal, apr, years) => {
  let r = (apr /. 12.0) /.100.0;
  let n = float_of_int(years * 12);
  let powerTerm = (1.0 +. r) ** n;
  principal *. (r *. powerTerm) /. (powerTerm -. 1.0);
};

let amount = payment(10000.0, 5.0, 30);
Js.log2(
  "Anount per month: $", 
  Js.Float.toFixedWithPrecision(amount, ~digits=2)
);