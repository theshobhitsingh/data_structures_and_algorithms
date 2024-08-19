//  score  = 100
//  console.log(score);

//  scoreTwo  = new Number(100)
//  console.log(scoreTwo);
//  console.log(scoreTwo.toFixed(2));

//  scoreThree = scoreTwo.toString()
//  console.log(scoreThree);
//  console.log(typeof scoreThree);

//  scoreFour = 123.98999
//  console.log(scoreFour.toPrecision(3));

//  const value = 10000000000000
//  console.log(value.toLocaleString('en-IN'));

// ************************Maths****************************

console.log(Math);
console.log(Math.PI);
console.log(Math.abs(-213));
console.log(Math.round(-213.999));
console.log(Math.ceil(12.22));
console.log(Math.floor(12.99));
console.log(Math.pow(2, 3));
console.log(Math.min(-1, -2, -3, 0, 1, 2, 3));
console.log(Math.max(-1, -2, -3, 0, 1, 2, 3));
console.log(Math.random());
console.log(Math.floor((Math.random() * 10) + 1));

const min = 10
const max = 20

console.log(Math.floor(Math.random() * (max - min + 1)) + min)