// Define a string with extra spaces
let myName = "Shobhit     ";
let mychannel = "Singh is Coding     ";

// Attempt to access a non-existent property `trueLength` on strings
console.log(myName.trueLength); // Output: undefined

// Define an array of heroes
let myHeros = ["Thor", "SpiderMan"];

// Define an object describing hero powers
let heroPower = {
     Thor: "hammer",
     Spiderman: "sling",

     // Method to get Spiderman's power
     getSpiderPower: function () {
          console.log(`Spidy power is ${this.Spiderman}`);
     }
};

// Extend Object prototype to add a method `shobhit` to all objects
Object.prototype.shobhit = function () {
     console.log(`Shobhit is present in all objects`);
};

// Extend Array prototype to add a method `heyShobhit` to all arrays
Array.prototype.heyShobhit = function () {
     console.log(`Shobhit says hello`);
};

// ---------------------------------------------------------------

// Inheritance using __proto__ and Object.setPrototypeOf()

// Define a base object User
const User = {
     name: "code",
     email: "code@gmail.com"
};

// Define an object Teacher inheriting from User using __proto__
const Teacher = {
     makeVideo: true,
     __proto__: User
};

// Define an object TeachingSupport
const TeachingSupport = {
     isAvailable: false
};

// Set TeachingSupport's prototype to Teacher using Object.setPrototypeOf()
Object.setPrototypeOf(TeachingSupport, Teacher);

// Define an object TASupport inheriting from TeachingSupport with additional properties
const TASupport = {
     makeAssignment: 'JavaScript Assignment',
     fullTime: true,
     __proto__: TeachingSupport
};

// ----------------------------------------------------------------

// Define a string with extra spaces
let anotherUsername = "CodeisLove    ";

// Extend String prototype to add a method `trueLength` to all strings
String.prototype.trueLength = function () {
     console.log(`${this}`);
     console.log(`True length is: ${this.trim().length}`); // `trim()` removes extra spaces
};

// Call `trueLength` method on string instances
anotherUsername.trueLength(); // Output: "CodeisLove     ", True length is: 11
"Shobhit".trueLength(); // Output: "Shobhit", True length is: 7
"Singh      ".trueLength(); // Output: "Singh", True length is: 5
