const user = {
     userName: "Shobhit",
     price: 1000,
     welcomeMsg: function () {
          console.log(`Hello ${this.userName} Welcome to our platform🚀`);
          console.log(this);
     }
}

user.welcomeMsg()
user.userName = "Singh"
user.welcomeMsg()
console.log(this);

function fn() {
     let userName = "Singh"
     console.log(this.userName);
}
fn()

const functionExpression = function () {
     let userName = "Singh"
     console.log(this.userName);
}
functionExpression()

const arrowFunction = () => {
     let userName = "Singh"
     console.log(this.userName);
}
arrowFunction()

const add = (num1, num2) => { // We need to add return when using braces
     return num1 + num2 // Explicit return
}
console.log(add(10, 99));

const subtract = (num1, num2) => num1 - num2   // Implicit return
console.log(subtract(10, 99));

const mul = (num1, num2) => (num1 * num2)   // We do not need to add return when using parenthesis
console.log(mul(10, 99));

const div = (key, value) => ({ userName: "Shobhit" })
console.log(div(1, 2));
