let discount = (percent: float, prise: float): float => {
  let amount = prise *. percent /. 100.0;
  prise -. amount;
};

let halfOff = discount(50.0);
let tenPercentOff = discount(10.0)

Js.log2("Pure cost discount 5%, prise 30$: ", discount(5.0, 30.0));
Js.log2("Pure cost discount 50%, prise 30$: ", halfOff(30.0));
Js.log2("Pure cost discount 10%, prise 30$: ", tenPercentOff(30.0));