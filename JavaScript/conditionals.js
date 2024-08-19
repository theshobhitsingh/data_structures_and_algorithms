// Control flow in Javascript
/*
| Operator  | Description                          | Example            |
|-----------|--------------------------------------|--------------------|
| `==`      | Equality (with type coercion)        | `3 == '3'` => true |
| `===`     | Strict Equality (no type coercion)   | `3 === '3'` => false|
| `!=`      | Inequality (with type coercion)      | `3 != '3'` => false|
| `!==`     | Strict Inequality (no type coercion) | `3 !== '3'` => true |
| `>`       | Greater Than                         | `5 > 3` => true    |
| `>=`      | Greater Than or Equal To             | `5 >= 5` => true   |
| `<`       | Less Than                            | `2 < 4` => true    |
| `<=`      | Less Than or Equal To                | `2 <= 2` => true   |
*/

// Basic if statement with a scoped variable
codingScore = 200;
if (codingScore >= 100) {
     const coder = "Progressing🚀";
     console.log(`The coder is ${coder}`);
}

// Implicit scope with multiple statements in if
if (codingScore >= 100)
     console.log(`The coder is coding`),
          console.log(`I write codes`);

// Nested if-else for sequential checks
if (codingScore < 300) {
     console.log("Less than 300");
} else if (codingScore < 400) {
     console.log("Less than 400");
} else if (codingScore < 500) {
     console.log("Less than 500");
} else if (codingScore < 1000) {
     console.log("Less than 1000");
} else {
     console.log("Keep Coding🧑‍💻");
}

// Logical AND operator for multiple conditions
const userLoggedin = true;
const upi = true;
if (userLoggedin && upi) {
     console.log("You can shop! Yay!");
}

// Logical OR operator for multiple conditions

const loggedInFromEmail = true
const loggedInFromGoogle = false
const guestUser = true
if (loggedInFromEmail || loggedInFromGoogle || guestUser) {
     console.log("You can continue to login...");
}


let isLoggedIn = false;

// Using the NOT operator to check if the user is not logged in
if (!isLoggedIn) {
     console.log("Please log in to continue.");  // This will execute because isLoggedIn is false
}

// Another example with a boolean variable
let isDarkMode = true;

// Using the NOT operator to toggle the dark mode
isDarkMode = !isDarkMode;

console.log("Dark mode is now:", isDarkMode);  // This will log "Dark mode is now: false"