const $ = (x) => {
  return document.querySelector(x);
};

const daysEle = $(".days");
const hoursEle = $(".hours");
const minutesEle = $(".minutes");
const secondsEle = $(".seconds");

const comingDays = "4/29/2023";
const date = new Date();
const dateEnd = new Date(comingDays);
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
hoursEle.innerText = hours + "h";
minutesEle.innerText = minutes + "m";
secondsEle.innerText = seconds + "s";

setInterval(() => {
  const date = new Date();
  const dateEnd = new Date(comingDays);
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
  hoursEle.innerText = hours + "h";
  minutesEle.innerText = minutes + "m";
  secondsEle.innerText = seconds + "s";
}, 1000);
