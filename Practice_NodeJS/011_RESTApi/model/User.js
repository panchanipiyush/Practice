const mongoose = require("mongoose")
const userSchema = new mongoose.Schema({
    uname:{
        type:String,
        required:true,
    },
    email:{
        type:String,
        required:true,
        unique:true
    },
    pass:{
        type:String
    },
    age:{
        type:Number
    },
    created:{
        type:Date,
        default:Date.now()
    }
})

const User = new mongoose.model("User", userSchema)

module.exports = User;