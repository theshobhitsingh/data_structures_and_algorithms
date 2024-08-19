const form = document.querySelector('form');

form.addEventListener('submit', function (e) {
    e.preventDefault();

    const height = parseInt(document.querySelector('#height').value);
    const weight = parseInt(document.querySelector('#weight').value);
    const results = document.querySelector('#results');
    const health = document.querySelector('#health');

    if (isNaN(height) || height <= 0) {
        results.innerHTML = `Please provide a valid height.`;
        health.innerHTML = ''; // Clear previous health message
    } else if (isNaN(weight) || weight <= 0) {
        results.innerHTML = `Please provide a valid weight.`;
        health.innerHTML = ''; // Clear previous health message
    } else {
        const bmi = (weight / ((height * height) / 10000)).toFixed(2);
        results.innerHTML = `<span>Your BMI is: ${bmi}</span>`;

        if (bmi < 18.6) {
            health.innerHTML = `You are underweight.`;
        } else if (bmi > 24.9) {
            health.innerHTML = `You are overweight.`;
        } else {
            health.innerHTML = `You have a normal weight.`;
        }
    }
});
