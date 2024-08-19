score1 = "100"  // => 100
score2 = "abc100"  // => NaN
score3 = undefined  // => NaN
score4 = null  // => 0
score5 = true  // => 1
score6 = "javascript" // NaN
score7 = 0 // False  //
// " "=> False  & "string" =>True

console.log(typeof score1);
console.log(typeof score2);
console.log(typeof score3);
console.log(typeof score4);
console.log(typeof score5);
console.log(typeof score6);

scoreInNum1 = Number(score1)
scoreInNum2 = Number(score2)
scoreInNum3 = Number(score3)
scoreInNum4 = Number(score4)
scoreInNum5 = Number(score5)
scoreInNum6 = Number(score6)
scoreInNum7 = Boolean(score7)

console.log(typeof scoreInNum1);
console.log(scoreInNum1);
console.log(typeof scoreInNum2);
console.log(scoreInNum2);
console.log(typeof scoreInNum3);
console.log(scoreInNum3);
console.log(typeof scoreInNum4);
console.log(scoreInNum4);
console.log(typeof scoreInNum5);
console.log(scoreInNum5);
console.log(typeof scoreInNum6);
console.log(scoreInNum6);
console.log(typeof scoreInNum7);
console.log(scoreInNum7);

console.log(2 + 2);
console.log(2 - 2);
console.log(2 * 2);
console.log(2 ** 2);
console.log(2 / 2);
console.log(2 % 2);

let str1 = "Hello👋 "
let str2 = "Coders 🚀"

console.log(str1 + str2);


let a = 1
let b = "2"
console.log(a + b);
console.log(typeof (a + b));

c = "1" + 2;
console.log(c);
console.log(typeof (c));

console.log("1" + 2 + 3);
console.log("1" + 2 + "3");
console.log(1 + 2 + "3");

console.log(true);
console.log(+true);
console.log(+" ");

let num1 = num2 = num3 = 2 * 3 + 7
console.table([num1, num2, num3])

let counter = 100;
console.log(counter);
counter++;
console.log(counter);