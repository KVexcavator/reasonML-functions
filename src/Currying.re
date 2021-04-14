let avg = (a: float, b: float): float => {
  (a +. b)/. 2.0
};
Js.log2("Average of 3 and 4", avg(3.0, 4.0));
Js.log2("Average of 3?!", avg(3.0));

let call = (country: string, area: string, number: string): string => {
  country ++ " " ++ area ++ " " ++ number;
};
Js.log2("Call Vasia at", call("+7","702","116 30 10"));

let callKazahstan = call("+7");
let callActiv = call("+7","702");

Js.log2("Call Germany:", callKazahstan);
Js.log2("Call Berlin:", callActiv);

Js.log2("Call something in Kazahstan:", callKazahstan("702", "116 30 10"));
Js.log2("Call something in Activ:", callActiv("116 30 10"));