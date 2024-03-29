const mongoose = require("mongoose")

const userSchema = new mongoose.Schema({
    uname:{
        type:String
    },
    email:{
        type:String
    },
    pass:{
        type:String
    },
    created:{
        type:Date,
        default:Date.now()
    }
})

module.export = new mongoose.model("User",userSchema)