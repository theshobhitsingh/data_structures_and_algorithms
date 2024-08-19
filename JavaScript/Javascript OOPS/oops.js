// Example of Object-Oriented Programming (OOP) concepts in JavaScript with British names

// ---------------------------------------------------
// 1. Object Literal - Basic way to create objects
// ---------------------------------------------------

// Define an object using object literal notation
const user = {
     username: "Arthur",
     loginCount: 8,
     signedIn: true,

     // Method to get user details
     getUserDetails: function () {
          console.log(this); // 'this' refers to the current object (user)
     }
};

// Access properties and call methods
console.log(user.username); // Output: Arthur
user.getUserDetails(); // Output: { username: 'Arthur', loginCount: 8, signedIn: true, getUserDetails: [Function: getUserDetails] }


// ---------------------------------------------------
// 2. Constructor Function - Creating objects with shared methods
// ---------------------------------------------------

// Constructor function for User
function User(username, loginCount, isLoggedIn) {
     // 'this' refers to the new object being created
     this.username = username;
     this.loginCount = loginCount;
     this.isLoggedIn = isLoggedIn;

     // Method defined inside the constructor function
     this.greeting = function () {
          console.log(`Welcome ${this.username}`);
     };
}

// Creating instances of User
const userOne = new User("Arthur", 12, true);
const userTwo = new User("Victoria", 11, false);

// Access properties and call methods
console.log(userOne.username); // Output: Arthur
userOne.greeting(); // Output: Welcome Arthur
console.log(userTwo.username); // Output: Victoria
userTwo.greeting(); // Output: Welcome Victoria


// ---------------------------------------------------
// 3. Prototype - Efficient way to share methods among instances
// ---------------------------------------------------

// Using prototype for shared methods
function UserWithPrototype(username, loginCount, isLoggedIn) {
     this.username = username;
     this.loginCount = loginCount;
     this.isLoggedIn = isLoggedIn;
}

// Adding method using prototype
UserWithPrototype.prototype.greeting = function () {
     console.log(`Welcome ${this.username}`);
};

// Creating instances of UserWithPrototype
const userThree = new UserWithPrototype("Charles", 15, true);
const userFour = new UserWithPrototype("Elizabeth", 9, false);

// Access properties and call methods
console.log(userThree.username); // Output: Charles
userThree.greeting(); // Output: Welcome Charles
console.log(userFour.username); // Output: Elizabeth
userFour.greeting(); // Output: Welcome Elizabeth

// ---------------------------------------------------
// 4. ES6 Classes - Modern syntax for defining classes
// ---------------------------------------------------

// Using ES6 classes for better readability and structure
class UserES6 {
     constructor(username, loginCount, isLoggedIn) {
          this.username = username;
          this.loginCount = loginCount;
          this.isLoggedIn = isLoggedIn;
     }

     greeting() {
          console.log(`Welcome ${this.username}`);
     }
}

// Creating instances of UserES6
const userFive = new UserES6("William", 20, true);
const userSix = new UserES6("Charlotte", 5, false);

// Access properties and call methods
console.log(userFive.username); // Output: William
userFive.greeting(); // Output: Welcome William
console.log(userSix.username); // Output: Charlotte
userSix.greeting(); // Output: Welcome Charlotte

// ---------------------------------------------------
// Summary and Explanation
// ---------------------------------------------------

/*
Object-Oriented Programming (OOP) in JavaScript revolves around creating objects and defining their behavior using methods and properties.
Here's a breakdown of the key concepts demonstrated:
 
1. Object Literal: Simplest way to create objects with properties and methods directly.
2. Constructor Function: Used with 'new' keyword to create instances with specific initializations.
3. Prototype: Efficient way to share methods among all instances of a constructor function to save memory.
4. ES6 Classes: Modern syntax that provides a clearer and more familiar way to define classes and their methods.
 
In each approach, the 'this' keyword plays a crucial role in referring to the current object instance.
Constructor functions and ES6 classes are particularly useful for creating multiple instances of objects with shared methods.
 
JavaScript's flexibility allows developers to choose the best OOP approach based on project requirements and coding style preferences.
*/
