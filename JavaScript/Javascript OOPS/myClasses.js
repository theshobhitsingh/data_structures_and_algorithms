// Define a User class using ES6 syntax
class UserClass {
     // Constructor method to initialize the user object
     constructor(username, email, password) {
          this.username = username; // Assign username
          this.email = email;       // Assign email
          this.password = password; // Assign password
     }

     // Method to encrypt the password by appending 'abc'
     encryptPassword() {
          return `${this.password}abc`; // Return encrypted password
     }

     // Method to change the username to uppercase
     changeUsername() {
          return `${this.username.toUpperCase()}`; // Return uppercase username
     }
}

// Create an instance of UserClass using ES6 syntax
const chai = new UserClass("code", "code@gmail.com", "@123!");

// Log the encrypted password and uppercase username for the instance 'chai'
console.log(chai.encryptPassword()); // Output: '@123!abc'
console.log(chai.changeUsername());   // Output: 'CODE'

// Equivalent implementation using function constructor (pre-ES6 style)
function UserFunction(username, email, password) {
     this.username = username; // Assign username
     this.email = email;       // Assign email
     this.password = password; // Assign password
}

// Adding methods to the UserFunction prototype
UserFunction.prototype.encryptPassword = function () {
     return `${this.password}abc`; // Return encrypted password
};
UserFunction.prototype.changeUsername = function () {
     return `${this.username.toUpperCase()}`; // Return uppercase username
};

// Create another instance of UserFunction
const tea = new UserFunction("Coffee", "coffee@gmail.com", "#123!");

// Log the encrypted password and uppercase username for the instance 'tea'
console.log(tea.encryptPassword()); // Output: '#123!abc'
console.log(tea.changeUsername());   // Output: 'COFFEE'
