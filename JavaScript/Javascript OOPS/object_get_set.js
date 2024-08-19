const User = {
     _email: 'ss@ai.com',
     _password: "abc",


     get email() {
          return this._email.toLowerCase()
     },

     set email(value) {
          this._email = value
     }
}

const code = Object.create(User)
console.log(code.email);