VanillaTilt.init(document.querySelector(".card"), {
  max: 5,
  speed: 400,
});

// $(document).on("click", "button", function () {
//   $(this).addClass("active").siblings().removeClass("active");
// });
// var btnC = document.getElementById("navbar");
// var btn = btnC.getElementsByClassName("card-section");
// for (var i = 0; i < btn.lenght; i++) {
//   btn[i].addEventListener("click", function () {
//     var current = document.getElementsByClassName("active");
//     current[0].className = current[0].className.replace("active");
//     this.className += "active";
//   });
// }
const $ = document.querySelector.bind(document);
const $$ = document.querySelectorAll.bind(document);
const tabs = $$("button");
const panes = $$(".card-section");
tabs.forEach((tab, index) => {
  const pane = panes[index];
  tab.onclick = function () {
    $("button.active").classList.remove("active");
    $(".card-section.active").classList.remove("active");

    this.classList.add("active");
    pane.classList.add("active");
  };
});

const buttons = document.querySelectorAll(".card-buttons button");

const card = document.querySelector(".card");
const card1 = document.querySelector(".card-header");
const card2 = document.querySelector(".card-cover");
const card3 = document.querySelector(".card-avatar");
const card4 = document.querySelector(".card-fullname");
const card5 = document.querySelector(".card-jobtitle");
const handleButtonClick = (e) => {
  const targetSection = e.target.getAttribute("data-section");

  targetSection !== "#about"
    ? card.classList.add("is-active")
    : card.classList.remove("is-active");
  card.setAttribute("data-state", targetSection);
  targetSection !== "#about"
    ? card1.classList.add("is-active")
    : card1.classList.remove("is-active");
  card1.setAttribute("data-state", targetSection);
  targetSection !== "#about"
    ? card2.classList.add("is-active")
    : card2.classList.remove("is-active");
  card2.setAttribute("data-state", targetSection);
  targetSection !== "#about"
    ? card3.classList.add("is-active")
    : card3.classList.remove("is-active");
  card3.setAttribute("data-state", targetSection);
  targetSection !== "#about"
    ? card4.classList.add("is-active")
    : card4.classList.remove("is-active");
  card4.setAttribute("data-state", targetSection);
  targetSection !== "#about"
    ? card5.classList.add("is-active")
    : card5.classList.remove("is-active");
  card5.setAttribute("data-state", targetSection);
};

buttons.forEach((btn) => {
  btn.addEventListener("click", handleButtonClick);
});
