let myArray = [1, 2, true, "Shobhit", 5.55]
const myArray2 = new Array(9, 8, 7, 6, 5, 4)
console.log(myArray);
console.log(myArray2[0]);

myArray.push("Hello Arrays!")
console.log(myArray);

myArray.pop(1)
console.log(myArray);

myArray.unshift(10)
console.log(myArray);

myArray.shift()
console.log(myArray);

console.log(myArray2.includes(12));
console.log(myArray2.indexOf(7));

newArray = myArray.join()
console.log(newArray);
console.log(typeof newArray);

console.log("A", myArray);

const arr1 = myArray.slice(0, 4)
console.log("A", myArray);
console.log("B", arr1);

const arr2 = myArray.splice(0, 4)
console.log("A", myArray);
console.log("C", arr2);

/*
The main difference between slice and splice lies in their intended use:
slice for extracting a portion of an array without modifying it,
and splice for modifying an array by adding or removing elements.
*/

let marvelSuperheroes = [
     "Spider-Man", "Iron Man", "Thor", "Captain America", "Hulk", "Black Widow",
     "Black Panther", "Doctor Strange", "Captain Marvel", "Ant-Man",
     "Wolverine", "Deadpool"
];
let dcSuperheroes = [
     "Superman", "Batman", "Wonder Woman", "Flash", "Aquaman", "Green Lantern", "Cyborg",
     "Shazam", "Martian Manhunter", "Green Arrow", "Batgirl", "Nightwing"
];

console.log("Marvel Superheroes:", marvelSuperheroes);
console.log("DC Superheroes:", dcSuperheroes);

marvelSuperheroes.push(dcSuperheroes)
const superheroes = dcSuperheroes.concat(marvelSuperheroes)
console.log("Marvel Superheroes:", marvelSuperheroes);
console.log("DC Superheroes:", dcSuperheroes);
console.log("Superheroes:", superheroes);

const allSuperheros = [...marvelSuperheroes,...dcSuperheroes]
console.log("All Superheroes:", allSuperheros);

arr = [1,2,3,[4,5,6],[7,[8,9,[10]]]]
newArr = arr.flat(Infinity)
console.log(arr);
console.log(newArr);

console.log(Array.isArray("Shobhit"));
console.log(Array.from("Shobhit"));
console.log(Array.from({ user: "Shobhit" })); // Interesting Case

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3));