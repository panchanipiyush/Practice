// const axios = require("axios")

// const url = "https://api.openweathermap.org/data/2.5/weather?lat=21.170240&lon=72.831062&appid=dee1453ce9972e4b53e8058399a68e05"
// // const url = "https://api.openweathermap.org/data/2.5/weather?lat=20.593683&lon=78.962883&appid=dee1453ce9972e4b53e8058399a68e05"


// axios.get(url).then(result =>{
//    console.log(Math.round(result.data.main.temp-273));
//     console.log(result.data.name);
// })

const axios = require("axios")

const url = "https://api.openweathermap.org/data/2.5/weather?lat=21.170240&lon=72.831062&appid=dee1453ce9972e4b53e8058399a68e05"
// const url = "https://api.openweathermap.org/data/2.5/weather?lat=20.593683&lon=78.962883&appid=dee1453ce9972e4b53e8058399a68e05"


axios.get(url).then(result =>{
    // console.log(`city : ${result.data.name} temprature is ${(Math.round(result.data.main.temp-273))}°C //// humidity is ${result.data.main.humidity}`);
    console.log(`city : ${result.data.name}`);
    console.log(`temprature is ${(Math.round(result.data.main.temp-273))}°C`);
    console.log(`humidity is ${result.data.main.humidity}`);
    // console.log(`description type : ${result.data.weather.description}`);
})