// Define a function that multiplies a number by 5
function multiplyBy5(num) {
     return num * 5;
}

// Add a property 'power' to the function object
multiplyBy5.power = 2;

// Call the function and access its properties
console.log(multiplyBy5(5)); // Output: 25 (5 multiplied by 5)
console.log(multiplyBy5.power); // Output: 2
console.log(multiplyBy5.prototype); // Output: undefined (functions don't have a 'prototype' property)

// ---------------------------------------------------------

// Constructor function to create user objects
function createUser(username, score) {
     this.username = username;
     this.score = score;
}

// Add methods to the prototype of createUser
createUser.prototype.increment = function () {
     this.score++;
};

createUser.prototype.printMe = function () {
     console.log(`Score for ${this.username} is ${this.score}`);
};

// Create instances using the constructor function
const chai = new createUser("Tea", 25);
const tea = new createUser("Coffee", 250);

// Call methods on instances
chai.increment(); // Increment chai's score by 1
chai.printMe(); // Output: Score for chai is 26

tea.printMe(); // Output: Score for tea is 250 (tea's score remains unchanged)



/*

Here's what happens behind the scenes when the new keyword is used:

A new object is created: The new keyword initiates the creation of a new JavaScript object.

A prototype is linked: The newly created object gets linked to the prototype property of the constructor function. This means that it has access to properties and methods defined on the constructor's prototype.

The constructor is called: The constructor function is called with the specified arguments and this is bound to the newly created object. If no explicit return value is specified from the constructor, JavaScript assumes this, the newly created object, to be the intended return value.

The new object is returned: After the constructor function has been called, if it doesn't return a non-primitive value (object, array, function, etc.), the newly created object is returned.

*/