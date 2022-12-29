const clockELe = document.querySelector(".clock");
const hoursEle = document.querySelector(".hours");
const minutesEle = document.querySelector(".minutes");
const secondsEle = document.querySelector(".seconds");
const date = new Date();
const dateEnd = new Date("1/22/2023");
const difference = dateEnd.getTime() - date.getTime();

const days = Math.floor(difference / (1000 * 86400));
const hours = Math.floor(difference / (1000 * 3600) - days * 24);
const minutes = difference / (1000 * 3600) - days * 24 - hours;
const seconds = 
console.log({days, hours, minutes});



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
    hoursEle.style.color = randomColor();
    minutesEle.style.color = randomColor();
    secondsEle.style.color = randomColor();
// }, 500);