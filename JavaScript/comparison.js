console.log(2 > 1);
console.log(2 < 1);
console.log(2 <= 1);
console.log(2 === 1);
console.log(2 == "2");
console.log(2 == true);
console.log(null > 0);
console.log(null === 0);
console.log(null >= 0);
console.log(undefined <= 0);
console.log(undefined == 0);
console.log(undefined < 0);
console.log(undefined === null);

/*The reason is that an equality check == and comparison operators (<=, <=, < , >) work differently.
Comparisons operators convert null to a number, treating as 0.
That is why null >= 0 is true and null > 0 is false*/

console.log(2 == "2");
console.log(2 === "2");