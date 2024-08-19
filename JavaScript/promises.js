promiseOne = new Promise(function (resolve, reject) {
    // Do any async task
    // DataBase calls, Network calls, Cryptography
    setTimeout(() => {
        console.log("This is asynchronous task and it is completed!"); resolve()
    }, 1000);
})

promiseOne.then(() => { console.log("Promise Consumed"); })

new Promise(function (resolve, reject) {
    setTimeout(() => {
        console.log("This is asynchronous task!"); resolve()
    }, 1000);
}).then(() => { console.log("Promise2 Consumed"); })

const promiseThree = new Promise(function (resolve, reject) {
    setTimeout(() => {
        resolve({ user: "Shobhit", code: "C++", life: 1 })
    }, 1000)
})
promiseThree.then((user) => { console.log(user); })


const promiseFour = new Promise(function (resolve, reject) {
    setTimeout(function () {
        let error = true
        if (!error) {
            resolve({ username: "ss", password: "123" })
        } else {
            reject('ERROR: Something went wrong')
        }
    }, 1000)
})

promiseFour
    .then((user) => {
        console.log(user);
        return user.username
    }).then((username) => {
        console.log(username);
    }).catch(function (error) {
        console.log(error);
    }).finally(() => console.log("The promise is either resolved or rejected"))



const promiseFive = new Promise(function (resolve, reject) {
    setTimeout(function () {
        let error = true
        if (!error) {
            resolve({ username: "javascript", password: "123" })
        } else {
            reject('ERROR: JS went wrong')
        }
    }, 1000)
});

async function consumePromiseFive() {
    try {
        const response = await promiseFive
        console.log(response);
    } catch (error) {
        console.log(error);
    }
}
consumePromiseFive()

async function getAllUsers() {
    try {
        const response = await fetch('https://jsonplaceholder.typicode.com/users')
        const data = await response.json()
        console.log(data);
    } catch (error) {
        console.log("Error: ", error);
    }
}
getAllUsers()


fetch('https://api.github.com/users/theshobhitsingh')
    .then((response) => {
        return response.json()
    })
    .then((data) => {
        console.log(data);
    })
    .catch((error) => console.log(error))