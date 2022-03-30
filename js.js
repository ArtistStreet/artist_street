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
var message = "what do you want? ctr shift c or ctr u for sure";

function rtclickcheck(keyp) {
  if (navigator.appName == "Netscape" && keyp.which == 3) {
    alert(message);
    return false;
  }

  if (navigator.appVersion.indexOf("MSIE") != -1 && event.button == 2) {
    alert(message);
    return false;
  }
}

document.onmousedown = rtclickcheck;
function mousehandler(e) {
  var myevent = isNS ? e : event;
  var eventbutton = isNS ? myevent.which : myevent.button;
  if (eventbutton == 2 || eventbutton == 3) return false;
}

// document.oncontextmenu = mischandler;
// document.onmousedown = mousehandler;
// document.onmouseup = mousehandler;
// function disableCtrlKeyCombination(e) {
//   var forbiddenKeys = new Array("a", "s", "c", "x", "u");
//   var key;
//   var isCtrl;
//   if (window.event) {
//     key = window.event.keyCode;
//     //IE
//     if (window.event.ctrlKey) isCtrl = true;
//     else isCtrl = false;
//   } else {
//     key = e.which;
//     //firefox
//     if (e.ctrlKey) isCtrl = true;
//     else isCtrl = false;
//   }
//   if (isCtrl) {
//     for (i = 0; i < forbiddenKeys.length; i++) {
//       //case-insensitive comparation
//       if (
//         forbiddenKeys[i].toLowerCase() == String.fromCharCode(key).toLowerCase()
//       ) {
//         return false;
//       }
//     }
//   }
//   return true;
// }
// function unloadJS(scriptName) {
//   var head = document.getElementsByTagName("head").item(0);
//   var js = document.getElementById(scriptName);
//   js.parentNode.removeChild(js);
// }

// //----------------------
// function unloadAllJS() {
//   var jsArray = new Array();
//   jsArray = document.getElementsByTagName("script");
//   for (i = 0; i < jsArray.length; i++) {
//     if (jsArray[i].id) {
//       unloadJS(jsArray[i].id);
//     } else {
//       jsArray[i].parentNode.removeChild(jsArray[i]);
//     }
//   }
// }
const popup = document.querySelector(".popup");
const hide = document.querySelector(".hide");
const body = document.querySelector("body");
const line = document.querySelector(".line");
window.onload = function () {
  setTimeout(function () {
    popup.style.display = "block";
    hide.style.display = "none";
    line.style.textDecoration = "line-through";
    body.style.background = "url(https://wallpaperaccess.com/full/670779.jpg)";
  }, 1500);
};
