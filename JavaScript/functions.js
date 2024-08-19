function sayMyName() {
     console.log("My name is Shobhit Singh");
}

sayMyName; // Reference of Function
sayMyName(); // Function Call


function add(num1, num2) {
     console.log(num1 + num2);
}
add(1, 10)
add(1, "Hi")
add(1, null)
add(1, undefined)

/*
Parameters are defined in the function declaration and act as placeholders for incoming values.
Arguments are the actual values passed to the function when it is invoked,
 matching the function's parameters in order and type.
*/

function addition(num1, num2) {
     let result = num1 + num2
     console.log("This will  execute before the return statement");
     return result
     console.log("This will not execute after the return statement");
}
console.log("Result is ", addition(1, 99));

function loggedIn(userName = "Default Value") {
     if (userName === undefined)   // if(!userName) same as the given one
     {
          console.log("Please log in with a valid user name");
          return;
     }
     return `${userName} logged into their account`
}
console.log(loggedIn('Shobhit'))
console.log(loggedIn()) // undefined

/*
The "rest operator" in JavaScript is represented by three dots (...) 
and is used within function parameters to collect multiple arguments into a single array. 
It allows you to handle an indefinite number of arguments as an array,
 providing flexibility and simplifying function definitions.
*/
function calculateCartPrice(...items) {
     return items;
}
function calculateCartPrices(val1, val2, ...items) {
     return items;
}
console.log(calculateCartPrice(1, 2, 55));
console.log(calculateCartPrices(1, 2, 55));


const user = {
     name: "SS",
     age: 20
}

function handleObject(anyObject) {
     console.log(`Hello ${anyObject.name} your age is ${anyObject.age}.`);
}

handleObject(user)
handleObject({
     name: "Shobhit Singh",
     age: 22
})

const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]

function handleArray(anyArray) {
     return anyArray[2]
}
console.log(handleArray(array))
console.log(handleArray([100, 200, 300, 400, 500]))


// Closures in JS
// Define the outer function
function outer() {
     let a = 10;
 
     function inner() {
         let b = 20;
         // 'a' is accessible here because of the closure property
         console.log(a + b);
     }
 return inner()
     // Note: The inner function is not called here
     // It would need to be called explicitly to execute
 }
 
 // To demonstrate closures, you'd call 'outer' and then 'inner'
 // This is not done in the current code, so 'inner' is not executed.
 outer();
   