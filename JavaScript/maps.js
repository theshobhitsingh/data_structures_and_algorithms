const languages = ["JavaScript", "Python", "Java", "C++", "Ruby", "Swift", "PHP", "TypeScript", "C#", "Go", "Rust", "Kotlin", "Scala"];

const values = languages.forEach((items) => {
     // console.log(items);
     return items;
})

// console.log(values);
const newNumss = []
const myNums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const numbers = myNums.filter((num) => num > 6)
const numbers2 = myNums.filter((num) => { return num > 6 })
const numbers3 = myNums.forEach((num) => {
     if (num > 6) {
          newNumss.push(num)
     }
})
console.log(numbers);
console.log(numbers2);
console.log(newNums);

const books = [
     { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
     { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
     { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
     { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
     { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
     { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
     { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
     { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
     { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
];

let userBooks = books.filter((bk) => bk.genre === 'History')

userBooks = books.filter((bk) => {
     return bk.publish >= 1995 && bk.genre === "History"
})

userBooks = books.filter((bk) => {
     return bk.publish >= 1800 && bk.genre === "History" && bk.publish === 1986 && bk.edition === 1996
})

console.log(userBooks);

let myNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let finalNumbers = []

myNumbers.forEach((item) => {
     finalNumbers.push(item + 10)
})
console.log(finalNumbers);

const newNums = myNumbers.map((num) => num + 10)
console.log(newNums);


const newNum = myNumbers           // Chaining of Functions
     .map((num) => num * 10)   // This chain will access the original array
     .map((num) => num + 1)  // This chain will access the manipulated array
     .filter((num) => num >= 40) // This chain will access the manipulated array

console.log(newNum);