// Date and Time in Javascript

let myDate = new Date()
console.log(myDate.toString());
console.log(myDate.toDateString());
console.log(myDate.toLocaleString());
console.log(typeof myDate);

let myCreatedDate = new Date(2024, 6, 1)
console.log(myCreatedDate.toDateString());

let myCreatedDateTwo = new Date(2024, 6, 1, 5, 5)
console.log(myCreatedDateTwo.toLocaleString());

let myCreatedDateThree = new Date("1/1/24")
console.log(myCreatedDateThree.toLocaleString());

let myTimeStamp = new Date
console.log(myCreatedDate.getTime());
console.log(myTimeStamp);
console.log(Math.floor((Date.now() / 1000)))
console.log(myTimeStamp.getMonth() + 1)
console.log(myTimeStamp.getFullYear())
console.log(myTimeStamp.getDay())

newDate.toLocaleString('default',
     {
          weekday: "long"
     }
)
