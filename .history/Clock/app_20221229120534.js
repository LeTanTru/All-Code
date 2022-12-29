const clockELe = document.querySelector(".clock");
const hoursEle = document.querySelector(".hours");
const minutesEle = document.querySelector(".minutes");
const secondsEle = document.querySelector(".seconds");
const randomColor = () => {
    return `rgb(${Math.floor(Math.random() * 1000)},${Math.floor(Math.random() * 1000)},${Math.floor(Math.random() * 1000)})`;
};

// background: linear-gradient(to right, #30CFD0 0%, #330867 100%);

setInterval(() => {
    const date = new Date();
    const hours = date.getHours();
    const minutes = date.getMinutes();
    const seconds = date.getSeconds();
    hoursEle.innerText = (hours < 10) ? `0${hours}h` : `${hours}h`;
    minutesEle.innerText = (minutes < 10) ? `0${minutes}m` : `${minutes}m`;
    secondsEle.innerText = (seconds < 10) ? `0${seconds}s` : `${seconds}s`;
    // clockELe.classList.toggle("open");
}, 1000);

// setInterval(() => {
//     hoursEle.style.color = randomColor();
//     minutesEle.style.color = randomColor();
//     secondsEle.style.color = randomColor();
// }, 500);