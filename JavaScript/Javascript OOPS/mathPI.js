// Get the property descriptor for Math.PI
const piDescriptor = Object.getOwnPropertyDescriptor(Math, "PI");

// Display the descriptor for Math.PI
console.log(piDescriptor);

// Log the value of Math.PI
console.log(`Value of Math.PI: ${Math.PI}`);

// Attempting to modify Math.PI will fail silently in strict mode
// Uncommenting the next lines will show that Math.PI is not writable
// Math.PI = 5;
// console.log(`Modified Math.PI: ${Math.PI}`);

// Create a chai object representing a drink
const chaiOrder = {
     name: 'Ginger Tea',
     price: 250,
     isAvailable: true,

     orderChai: function () {
          console.log("Chai is not ready yet");
     }
};

// Get the property descriptor for the 'name' property
console.log(Object.getOwnPropertyDescriptor(chaiOrder, "name"));

// Redefine the 'name' property to modify its attributes
Object.defineProperty(chaiOrder, 'name', {
     enumerable: true, // Make the property enumerable
     // writable: false, // Uncomment to make 'name' non-writable
     configurable: false// Make the property unconfigurable
});

// Log the updated property descriptor for 'name'
console.log(Object.getOwnPropertyDescriptor(chaiOrder, "name"));

// Log properties of chaiOrder, excluding functions
for (let [key, value] of Object.entries(chaiOrder)) {
     if (typeof value !== 'function') {
          console.log(`${key}: ${value}`);
     }
}
