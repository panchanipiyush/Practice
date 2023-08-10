// const express = require ("express")
// const app = express();
// const port = 9000;
// const path = require ("path")

// app.listen(port,()=>{
//     console.log("server running on port : "+port)
//  })

// app.get("/",(req,resp)=> {
//         resp.send("main req. calling")
// })

// app.get("/home",(req,resp)=> {
//     // resp.send("main req. calling")
//     resp.sendFile(path.join(__dirname,"home.html"))
    
//  })

// app.get("/about",(req,resp)=>{
  
//     resp.sendFile(path.join(__dirname,"about.html"))
// })

// app.get("/contact",(req,resp) =>{
//     resp.sendFile(path.join(__dirname,"contact.html"))
    
// })

const express = require("express")
const app = express();
const port = 9000;
const path = require("path")



app.get("/", (req, resp) => {
    // resp.send("home page")
    resp.sendFile(path.join(__dirname, "home.html"))
})

app.get("/about", (req, resp) => {
    resp.sendFile(path.join(__dirname, "about.html"))
})
app.get("/contact", (req, resp) => {
    resp.sendFile(path.join(__dirname, "contact.html"))
})

app.get("*", (req, resp) => {
    resp.sendFile(path.join(__dirname, "err.html"))
})

app.listen(port, () => {
    console.log("Server running on port : " + port);
})


