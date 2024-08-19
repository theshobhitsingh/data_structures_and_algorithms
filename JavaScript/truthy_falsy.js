/*
| Falsy Values           | Truthy Values              |
|------------------------|--------------------------- |
| false                  | true     ,  'false'        |
| 0 (zero), -0, BigInt 0n| Any non-zero number        |
| '' (empty string)      | Any non-empty string , '0', " "|
| null                   | Objects (including arrays) |
| undefined              | Functions ,  function(){}  |
| NaN (Not a Number)     | Infinity and -Infinity     |
*/

// Example function to check truthy and falsy values
function checkTruthyFalsy(value) {
     if (value) {
          console.log(`${value} is truthy`);
     } else {
          console.log(`${value} is falsy`);
     }
}

// Testing with various values
checkTruthyFalsy(true);          // Output: true is truthy
checkTruthyFalsy(false);         // Output: false is falsy
checkTruthyFalsy(0);             // Output: 0 is falsy
checkTruthyFalsy(1);             // Output: 1 is truthy
checkTruthyFalsy('');            // Output: '' is falsy
checkTruthyFalsy('Hello');       // Output: 'Hello' is truthy
checkTruthyFalsy(null);          // Output: null is falsy
checkTruthyFalsy(undefined);     // Output: undefined is falsy
checkTruthyFalsy({});            // Output: [object Object] is truthy (an empty object)
checkTruthyFalsy([]);            // Output:  is truthy (an empty array)
checkTruthyFalsy(NaN);           // Output: NaN is falsy
checkTruthyFalsy(Infinity);      // Output: Infinity is truthy
checkTruthyFalsy(-Infinity);     // Output: -Infinity is truthy


let arr = [];
if (arr.length == 0) {
     console.log("Array is empty!");
}

let obj = {}
if (Object.keys(obj).length == 0) {
     console.log("Object is empty!");
}