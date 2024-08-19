class User {
     constructor(email, password) {
          this.email = email;
          this.password = password
     }

     get email() {
          return this._email.toUpperCase()
     }
     set email(value) {
          this._email = value
     }

     get password() {
          return `${this._password}ss`
     }

     set password(value) {
          this._password = value
     }
}

const ss = new User("ss.ai@openai.com", "#chatgpt")
console.log(ss.email);