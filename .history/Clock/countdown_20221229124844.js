const daysEle = document.querySelector(".countdown-days")
const hoursEle = document.querySelector(".countdown-hours")
const minutesEle = document.querySelector(".countdown-minutes")
const secondsEle = document.querySelector(".countdown-seconds")

console.log(daysEle, hoursEle, minutesEle, secondsEle)

setInterval(() => {
  const date = new Date();
  const dateEnd = new Date("1/22/2023");
  const difference = dateEnd.getTime() - date.getTime();
  const days = Math.floor(difference / (1000 * 86400));
  const hours = Math.floor(difference / (1000 * 3600) - days * 24);
  const minutes = Math.floor(
    (difference / (1000 * 3600) - days * 24 - hours) * 60
  );
  const seconds = Math.floor(
    ((difference / (1000 * 3600) - days * 24 - hours) * 60 - minutes) * 60
  );
  console.log({ days, hours, minutes, seconds });
}, 1000);
