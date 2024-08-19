// For of loop
const myArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
for (const num of myArray) {
     console.log(num);
}

const greetings = "Hello World!"
for (const greet of greetings) {
     if (greet == " ") {
          continue;
     }
     console.log(`Each char in ${greetings} is ${greet}`);
}

// Maps

const map1 = new Map();
map1.set('a', 1);
map1.set('b', 2);
map1.set('c', 3);
console.log(map1);

console.log(map1.get('a'));
// Expected output: 1

map1.set('a', 97);

console.log(map1.get('a'));
// Expected output: 97

console.log(map1.size);
// Expected output: 3

map1.delete('b');

console.log(map1.size);
// Expected output: 2

for (const [key, value] of map1) {   // Destructuring of Map
     console.log(key);
     console.log(value);
}


// For in looops => Objects iteration

let myProgrammingLanguages = {
     cpp: "C++",
     java: "Java",
     py: "Python",
     js: "Javascript",
     ts: "Typescript"
}
for (const key in myProgrammingLanguages) {
     console.log(`${key} is for ${myProgrammingLanguages[key]}`);
}

const programmingLanguages = ["JavaScript", "Python", "Java", "C++", "Ruby", "Swift", "PHP", "TypeScript", "C#", "Go", "Rust", "Kotlin", "Scala"];

for (const key in programmingLanguages) {
     console.log(`${key} is for ${programmingLanguages[key]}`);
}

// For each looooooooooooooooop
const coding = ["JavaScript", "Python", "Java", "C++", "TypeScript"];

console.log(coding.join(', '));


coding.forEach(function (value) {
     console.log(value);
});

coding.forEach((item) => {
     console.log(item);
});

function print(val) {
     console.log(val);
}

coding.forEach(print)

coding.forEach((item, index, arr) => {
     console.log(item, index, arr);
})

// Iterations on Objects

let myCoding = [
     {
          language: " Java ",
          extension: ".js"
     },
     {
          language: " C++",
          extension: ".cpp"
     },
     {
          language: " Python ",
          extension: ".py"
     }
]

myCoding.forEach((item) => {
     console.log(item.language);
     console.log(item.extension);
})