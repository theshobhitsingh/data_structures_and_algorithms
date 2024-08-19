/* IIFE
An IIFE (Immediately Invoked Function Expression) is a JavaScript function
 that runs as soon as it is defined.
  */
// IIFE synatx => (function)(execution)
(function iffe() {  // Named IIFE
     console.log("IIFE is working...");
}()); // Here we need to add a semi-colon to end the execution of iife

(() => {   // Unnamed IIFE
     console.log("IIFE is working perfectly fine...");
})();

((name) => {
     console.log(`Welcome to IIFE world ${name}`);
})("Shobhit Singh"); // We pass arguments like this
