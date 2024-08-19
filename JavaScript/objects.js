Object.create; // Singleton

const appUser = new Object();
appUser.id = "@123"
appUser.name = "Sunny"
appUser.loggedIn = false
// console.log(appUser);

let user = {
     email: "xyz@email.com",
     userName: {
          name: {
               firstName: "Shobhit",
               lastName: "Singh"
          }
     }
}
console.log(user.userName.name.firstName);

let obj1 = {
     name: "Apple",
     color: "Red",
     quantity: 10,
};
let obj2 = {
     name: "Book",
     pages: 300,
     author: "J.K. Rowling",
};

let obj3 = { obj1, obj2 }
let obj4 = Object.assign({}, obj1, obj2);
let obj5 = { ...obj1, obj2 }
console.log(obj3);
console.log(obj4);
console.log(obj5);

/*
const target = { a: 1, b: 2 };
const source = { b: 4, c: 5 };

const returnedTarget = Object.assign(target, source);

console.log(target);
Expected output: Object { a: 1, b: 4, c: 5 }

console.log(returnedTarget === target);
Expected output: true
*/

let arrayOfObjects = [
     {
          name: "John",
          age: 25,
          city: "New York"
     },
     {
          name: "Emma",
          age: 30,
          city: "Los Angeles"
     },
     {
          name: "Michael",
          age: 28,
          city: "Chicago"
     }
];

console.log(arrayOfObjects);
console.log(arrayOfObjects[0].name);

console.log(Object.keys(arrayOfObjects))
console.log(Object.values(arrayOfObjects))
console.log(Object.entries(arrayOfObjects))
console.log(appUser.hasOwnProperty('id'))



//Object Literals

const mySym = Symbol("key1")
const myObj =
{
     user: "Shobhit",
     age: 20,
     "city": "Kanpur",
     commited: false,
     languages: ["C", "C++", "Java", "Python", "Javascript"],
     [mySym]: "Hello"  // To acces a symbol as symbol otherwise it will be converted into string
}
console.log(myObj.user);
console.log(myObj.mySym);
console.log(myObj['city']);

myObj.user = "SS"
console.log(myObj);
Object.freeze(myObj)   // Now you can not make any changes in the Object
myObj.age = 22

myObj.greetings = function greetings() {
     console.log("Namaste JS👀");
}
myObj.greetingsTwo = function greetingsTwo() {
     console.log(`Hello ${this.user}`);
}
console.log(myObj.greetings());
console.log(myObj.greetings);
console.log(myObj.greetingsTwo);
console.log(myObj.greetingsTwo());

// Object Destructuring
let course = {
     courseName: "Javascript",
     courseInstructor: "Hitesh Choudhary",
     coursePrice: "Free",
     courseValue: "♾️",
}

const { courseValue } = course
const { courseValue: cVal } = course
console.log(courseValue);
console.log(cVal);