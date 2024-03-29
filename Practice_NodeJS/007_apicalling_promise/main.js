const geocode = require("./geocode")
const weather = require("./weather")
const city = process.argv[2]

if(!city) {
        console.log("Please aenter the city name : ");
        return;
}

// geocode.getGeocode(city,(data,err) => {
//     console.log(data);
//         weather.getWeather(data.lat,data.lng,(data,err)=>{
//             console.log(data);
//         })
// })

geocode.getGeocode(city).then(result=>{
    console.log(result);
    return weather.getWeather(result.lat,result.lng)
}).then(data =>{
    console.log(data);
}).catch(err => {
    console.log(err);
})