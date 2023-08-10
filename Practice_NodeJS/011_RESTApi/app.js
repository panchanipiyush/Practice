const express = require("express")
const app = express();
const PORT = 9000;

const mongoose = require("mongoose")
mongoose.set('strictQuery', true)
app.use(express.json())
const dburl = "mongodb://127.0.0.1:27017/24jan";

mongoose.connect(dburl).then(result=>{
    console.log("db connected");
}).catch(err=>{
    console.log(err);
})

const userrouter = require("./router/Userrouter")
app.use("/",userrouter)


app.listen(PORT,()=>{
    console.log("server running on port");
})