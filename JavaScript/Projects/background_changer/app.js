const buttons = document.querySelectorAll('.button');
const body = document.querySelector('body');

const colors = {
    red: 'red',
    yellow: 'yellow',
    green: 'green',
    blue: 'blue'
};

buttons.forEach(function (button) {
    button.addEventListener('click', function () {
        const color = colors[button.id];
        if (color) {
            body.style.backgroundColor = color;
        }
    });
});
