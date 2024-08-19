let user = "Shobhit Singh "
const codeCount = 200

console.log(user + codeCount);
// String Interpolation
console.log(`Hello my name is ${user} and I have solved ${codeCount} DSA problems in my vacations`)

const game = new String("GTA")
console.log(game);
console.log(game[0]);
console.log(game.__proto__);
console.log(game.toLowerCase());
console.log(game.toUpperCase());
console.log(game.charAt(1));
console.log(game.indexOf('A'));
console.log(game.substring(0, 3));
console.log(game.slice(-3, 3));

let newStringOne = "            Shobhit Singh                       "
console.log(newStringOne);
console.log(newStringOne.trim());

let url = "https://developer.mozilla.org/en-US/docs/Web"
console.log(url);
url.replace("https", "http")
let url2 = url.replace("https", "http")
console.log(url2);
console.log(url.includes("developer"));
console.log(url2.split("/"));