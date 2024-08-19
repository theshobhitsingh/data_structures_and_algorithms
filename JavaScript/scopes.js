let a = 100;
const b = 200;
var c = 300;

if (true) {
     let a = 10;
     const b = 20;
     var c = 30;
     console.log("Local a:", a);
     console.log("Local b:", b);
     console.log("Local c:", c);
}

// console.log("let will not work due to local scope",a);
// console.log("cosnt will not work due to local scope",b);
console.log("var will work due to global scope it will also override the other values of c; even if they are declared outside local the scope.", c);
console.log("Global a:", a);
console.log("Global b:", b);
console.log("Global c:", c);

function one() {
     const userName = "Shobhit"
     function two() {
          const company = "Apple"
          console.log(userName);
          console.log(company);
     }
     // console.log(company);
     two()
}
// one()

if (true) {
     const userName = "Singh"
     if (true) {
          const company = "Apple"
          console.log(userName);
          console.log(company);
     }
     console.log(userName);
     // console.log(company);
}
// Function declaration can be accessed before its actual declaration
console.log(addOne(10));
function addOne(num) {
     return num + 1;
}
console.log(addOne(10));


// Function expression cannot be accessed before its actual declaration
// console.log(addTwo(10));   
const addTwo = function (num) {
     return num + 2;
}
console.log(addTwo(10));
