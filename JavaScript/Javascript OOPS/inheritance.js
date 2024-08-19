// Define the User class
class User {
     constructor(username) {
          this.username = username; // Initialize username
     }

     // Method to log the username
     logMe() {
          console.log(`USERNAME is ${this.username}`);
     }
}

// Define the Teacher class that extends User
class Teacher extends User {
     constructor(username, email, password) {
          super(username); // Call the parent class constructor
          this.email = email;     // Initialize email
          this.password = password; // Initialize password
     }

     // Method to add a course
     addCourse() {
          console.log(`A new course was added by ${this.username}`);
     }
}

// Create an instance of Teacher
const chai = new Teacher("code", "code@email.com", "abc@XYZ");

// Log the username of the teacher
chai.logMe(); // Output: USERNAME is code

// Create an instance of User
const newCoder = new User("newCoder");

// Log the username of the user
newCoder.logMe(); // Output: USERNAME is newCoder

// Check if newCoder is an instance of User and Teacher
console.log(newCoder instanceof User); // Output: true
console.log(newCoder instanceof Teacher); // Output: false