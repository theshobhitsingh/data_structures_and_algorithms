// Selecting elements from the DOM
const parent = document.querySelector('.parent');
const dayOne = document.querySelector('.day');
const languageList = document.querySelector('.language');

// Manipulating DOM elements
parent.children[1].style.color = "orange"; // Changing style of the second child of .parent

// Logging parent's first and last child elements
console.log(parent.firstElementChild);
console.log(parent.lastElementChild);

// Manipulating classes and attributes
console.log(dayOne.parentElement);
console.log(dayOne.nextElementSibling);

// Creating a new div dynamically
const div = document.createElement('div');
div.className = "main";
div.id = Math.floor(Math.random() * 10 + 1);
div.setAttribute("title", "generated title");
div.style.backgroundColor = "green";
div.style.padding = "12px";
div.style.fontWeight = 900;
div.innerText = "Hello DOM!";
const addText = document.createTextNode("Chai aur code");
div.appendChild(addText);
document.body.appendChild(div);

// Function to add new languages to the list
function addLanguage(langName) {
  const li = document.createElement('li');
  li.innerHTML = `${langName}`;
  languageList.appendChild(li);
}

// Optimized function to add new languages
function addOptiLanguage(langName) {
  const li = document.createElement('li');
  li.appendChild(document.createTextNode(langName));
  languageList.appendChild(li);
}

// Adding languages using both functions
addLanguage("C");
addLanguage("C++");
addLanguage("Java");
addOptiLanguage('Python');
addOptiLanguage('Typescript');

// Editing and manipulating existing list items
const secondLang = document.querySelector("li:nth-child(2)");
const newli = document.createElement('li');
newli.textContent = "Swift";
secondLang.replaceWith(newli);

const firstLang = document.querySelector("li:first-child");
firstLang.outerHTML = '<li>TypeScript</li>';

const lastLang = document.querySelector('li:last-child');
lastLang.remove();
