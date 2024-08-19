/*
The "Nullish Coalescing Operator" (`??`) is a relatively new addition to JavaScript (introduced in ES2020/ES11)
that provides a concise way to handle default values for null or undefined values.
 It's particularly useful when you want to use a fallback value if a variable is null or undefined.
*/

let val1;
let val2;
let val3;
let val4;
let val5;

val1 = 11 ?? 23
console.log(`Value is ${val1}`);


val2 = null ?? 29
console.log(`Value is ${val2}`);


val3 = undefined ?? 21
console.log(`Value is ${val3}`);

val4 = null ?? undefined
console.log(`Value is ${val4}`);

val5 = null ?? undefined ?? 1 ?? 28
console.log(`Value is ${val5}`);

/*The Nullish Coalescing Operator (??) enhances JavaScript's capability to manage default values effectively, improving code readability 
and robustness in scenarios where null or undefined values need handling gracefully.*/

// Ternary operator for concise conditionals
// condition ? true : false
codingScore >= 100 ? console.log("yay!") : console.log("Oh no!");