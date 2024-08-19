// Base class representing a user
class User {
     constructor(username) {
          this.username = username; // Initialize username
     }

     // Method to log the username
     logUsername() {
          console.log(`Username: ${this.username}`);
     }

     // Static method to create a unique ID
     static generateId() {
          return `ID-${Math.floor(Math.random() * 1000)}`; // Generate a random ID
     }
}

// Create an instance of User
const userShobhit = new User("Shobhit");
userShobhit.logUsername(); // Output: Username: Shobhit

// Derived class representing a teacher
class Teacher extends User {
     constructor(username, email) {
          super(username); // Call the parent constructor
          this.email = email; // Initialize email
     }

     // Method to log the teacher's email
     logEmail() {
          console.log(`Email: ${this.email}`);
     }
}

// Create an instance of Teacher
const teacherIphone = new Teacher("iphone", "i@phone.com");
teacherIphone.logUsername(); // Output: Username: iphone
teacherIphone.logEmail();    // Output: Email: i@phone.com

// Use the static method to generate an ID
console.log(Teacher.generateId()); // Output: ID-123 (or similar)
