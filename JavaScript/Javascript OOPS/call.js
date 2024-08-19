// Function to set the username, simulating complex DB calls
function SetUsername(username) {
    // Imagine complex database operations happening here
    this.username = username; // Assign the username to the instance
    console.log("called");     // Log to indicate this function was executed
}

// Function to create a new user
function createUser(username, email, password) {
    // Use 'call' to invoke SetUsername in the context of the current instance
    SetUsername.call(this, username); // Set the username

    // Assign email and password to the instance
    this.email = email;
    this.password = password;
}

// Create a new user instance
const chai = new createUser("Code", "code@apple.com", "#MyApple@1");

// Log the created user instance
console.log(chai);
