// const fs = require("fs")

// const createfile = (data) => {
//     const newData = JSON.stringify(data)
//     fs.writeFile("task.json", newData, (err) => {
//         if (err) {
//             console.log(err);
//             return
//         }
//         console.log("Data inserted in file");
//     })
// }

// const viewfile = () => {
//     const alldata = viewdata()
//     console.log(alldata);
// }


// const viewdata = () => {

//     try {
//         const data = fs.readFileSync("task.json", "utf-8")
//         if (data) {
//             return JSON.parse(data)
//         } else {
//             return [];
//         }
//     } catch (error) {
//         return [];
//     }

// }

// module.exports = { createfile, viewfile }

const { all } = require("axios");
const { log } = require("console");
const fs = require("fs")

const createfile = (data) => {
            const newdata = JSON.stringify(data)
            fs.writeFile("task.json",newdata,(err) => {
                if(err){
                    console.log(err);
                    return
                }
                console.log("Data inserted in file");
            })
}

const view = () => {
        const alldata = viewdata();
        console.log(alldata);
}

const viewdata = () =>{
    try {
        const data = fs.readFile("task.json","utf-8")
        if (data) {
            return JSON.parse(data)
        }
        else{
            return [];
        }

    } catch (error) {
        return [];
    }
}

module.exports = {createfile,viewdata,view}