const daysEle = document.querySelector(".days");
const hoursEle = document.querySelector(".hours");
const minutesEle = document.querySelector(".minutes");
const secondsEle = document.querySelector(".seconds");

console.log({ daysEle, hoursEle, minutesEle, secondsEle });

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
daysEle.innerText = days;
hoursEle.innerText = hours;
minutesEle.innerText = minutes;
secondsEle.innerText = seconds;

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
  daysEle.innerText = days + "d";
  hoursEle.innerText = hours + " hours";
  minutesEle.innerText = minutes + " minutes";
  secondsEle.innerText = seconds + " seconds";
  // console.log({ days, hours, minutes, seconds });
}, 1000);
