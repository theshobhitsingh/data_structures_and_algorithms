const id = 123789
let userName = "Shobhit Singh"
var password = "#456@google.com"
/*
Prefer not to use var 
Because of issues in Block scope & Functional Scope
*/
let address;

console.log(id);
console.log(userName);
console.log(password);

// id = 321  // Not allowed because it is constant
userName = "Singh Shobhit"
password = "@pwd"

console.log(id);
console.log(userName);
console.log(password);
console.table([id, userName, password, address])