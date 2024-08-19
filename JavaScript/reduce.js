const array = [1, 2, 3, 4];

// 0 + 1 + 2 + 3 + 4
const initialValue = 0;
const sumWithInitial = array.reduce(
     (accumulator, currentValue) => {
          console.log(`Accumulator is ${accumulator} and CurrentValue is ${currentValue}`);
          return accumulator + currentValue;
     },
     initialValue
);
console.log(sumWithInitial);

const myNums = [1, 2, 3]
// const myTotal = myNums.reduce(function (acc, currval) {
//     console.log(`acc: ${acc} and currval: ${currval}`);
//     return acc + currval
// }, 0)
const myTotal = myNums.reduce((acc, curr) => acc + curr, 0)
console.log(myTotal);

const shoppingCart = [
     {
          itemName: "DSA course",
          price: 2999
     },
     {
          itemName: "Dev course",
          price: 999
     },
     {
          itemName: "Android Dev Course",
          price: 5999
     },
     {
          itemName: "Data Science Course",
          price: 12999
     },
     {
          itemName: "Machine Learning Course",
          price: 19999
     },
]

const priceToPay = shoppingCart.reduce((acc, item) => acc + item.price, 0)
console.log(priceToPay);