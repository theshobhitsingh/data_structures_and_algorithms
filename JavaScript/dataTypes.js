"use strict"; //Treat all the JS code as the newer version

// alert("We can not run this here in NodeJS it will run in Browser")

let userName = "Shobhit" // String datatype
let age = 20 // Number datatype => BigInt is used for very large number values
let coder = true // Boolean datatype

// null is a Standalone Value in JS;it is a value in itself
// undefined is simply when we have not defined a value in a variable
// symbol is used for uniqueness
// object is a datatype

console.log(typeof (userName)); // string
console.log(typeof (age));  // number
console.log(typeof "Nodejs"); // string
console.log(typeof (coder)); // boolean
console.log(typeof undefined); // undefined
console.log(typeof null); // object

//  Primitive Datatypes (Call by Values)
//  7 types : String, Number, Boolean, null, undefined, Symbol, BigInt
let str = "Hello JS"
let num1 = 100
let num2 = 100.100
let good = true
let nullValue = null  // empty value
let undefinedValue = undefined // only declare let undefinedValue; => will also be undefined
const id = Symbol('123')
const id2 = Symbol('123')
console.table([str, num1, num2, good, nullValue, undefinedValue])
console.log(id === id2)
const bigNumber = 123456789000147956523n // BigInt


// Non-Primitive Datatypes (Call by Reference)
// Array, Objects, Functions
let programmingLanguages = ["C", "C++", "Java", "Python", "Javascript"] // Array
let myObject = {  // Object
     user: "Shobhit",
     age: 20,
}
const myFunction = function () {
     console.log("Hello World🌎");
}
myFunction()
console.log(typeof bigNumber);
console.log(typeof programmingLanguages);
console.log(typeof myFunction);
console.log(typeof myObject);


/* Return type of variables in JavaScript
1) Primitive Datatypes
       Number => number
       String  => string
       Boolean  => boolean
       null  => object
       undefined  =>  undefined
       Symbol  =>  symbol
       BigInt  =>  bigint

2) Non-primitive Datatypes
       Arrays  =>  object
       Function  =>  function
       Object  =>  object
*/

// typeof() returns the datatype of the variables


// Stack Memory => Primitive Datatypes => Copy of Values
// Heap Memory => Non-Primitive Datatypes => Reference/ Original Values

let name1 = "Shobhit Singh"
let name2 = name1
console.log(name1);
console.log(name2);
name2 = "Singh"
console.log(name1);
console.log(name2);


let user1 =
{
     user: "Shobhit",
     age: 20
}

console.log(user1.user);
console.log(user1.age);

let user2 = user1
user2.user = "Singh"
// let user2 = 
// {
//      user: "Shobhit",
//      age : 20
// }

console.log(user1.user);
console.log(user1.age);
console.log(user2.user);
console.log(user1.age);