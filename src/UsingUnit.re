let random1 = Js.Math.random();
Js.log(random1);

let random2 = Js.Math.random;
Js.log(random2);

let debugInt = (varName: string, value: int) : unit => {
  Js.log(varName ++ " is: " ++ string_of_int(value))
};
debugInt("Am", 2);

let separator = () : unit => {
  Js.log("---------------");
};
separator();

let doNothing = (): unit => {
  ();
};
doNothing();