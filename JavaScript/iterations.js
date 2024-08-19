// Basic for loop to print numbers from 0 to 10
for (let index = 0; index <= 10; index++) {
     console.log(index);
}

// For loop to check and print even or odd numbers from 0 to 10
for (let index = 0; index <= 10; index++) {
     if (index % 2 === 0) {
          console.log(`${index} is an even number`);
     } else {
          console.log(`${index} is an odd number`);
     }
}

// Nested for loops to print multiplication table from 0 to 9
for (let i = 0; i < 10; i++) {
     for (let j = 0; j < 10; j++) {
          console.log(`${i} * ${j} = ${i * j}`);
     }
}

// Loop through an array and print each element
let myArray = ["Spidy", "Bunny", "Honey", "Katty", "Roomie"];
for (let index = 0; index < myArray.length; index++) {
     const element = myArray[index];
     console.log(element);
}

// Example of using break and continue in a for loop
for (let index = 1; index <= 20; index++) {
     if (index === 10) {
          break; // Exit the loop completely when index is 10
     }
     if (index % 2 === 0) {
          continue; // Skip even numbers and continue with the next iteration
     }
     console.log(`Value is ${index}`); // Print the value if it's odd and not 10
}

// While loop to print numbers from 1 to 10
let index = 1;
while (index <= 10) {
     console.log(index);
     index++;
}

// While loop to iterate through an array and print each element
let myArray2 = ["Spidy", "Bunny", "Honey", "Katty", "Roomie"];
index = 0; // Reassign index variable
while (index < myArray2.length) {
     console.log(myArray2[index]);
     index++;
}

// Do...While loop to print numbers from 20 to 1
index = 20; // Reassign index variable
do {
     console.log(index);
     index--;
} while (index >= 1);


/*
Here's a comparison table outlining the differences between `for`, `while`, and `do-while` loops in JavaScript:

| Feature           | `for` loop                                  | `while` loop                               | `do-while` loop                            |
|-------------------|---------------------------------------------|--------------------------------------------|--------------------------------------------|
| Initialization    | Initializes loop variable                   | Requires initialization before loop       | Initializes loop variable                  |
| Condition         | Checks condition before each iteration      | Checks condition before each iteration     | Checks condition after each iteration      |
| Execution control | Condition and iteration step in one place   | Condition can be anywhere in the loop     | Condition at the end, iteration at the top |
| Iteration control | Increment/decrement is explicitly defined   | Increment/decrement must be done manually | Increment/decrement is done automatically  |
| Minimum iterations| Can have zero iterations if condition fails | Can have zero iterations if condition fails | At least one iteration is guaranteed      |
| Example           | ```javascript                               | ```javascript                              | ```javascript                              |
| for (let i = 0;
*/