const express = require("express")
const router = express.Router()
const User = require("../model/User")


router.get("/users",(req,resp)=>{
    User.find().then(data=>{
            console.log(data);
            resp.send(data)
    }).catch(err=>{
        console.log(err);
        resp.send(err)
    })
})

router.post("/users",(req,resp)=>{
const user = new User (req.body)
user.save().then(data=>{
    resp.send(data)
}).catch(err=>{
    resp.send(err)
})
// resp.send("post calling")
})

router.get("/users/:id",(req,resp)=>{
const _id = req.params.id
User.findById(_id).then(data=>{
    resp.send(data)
}).catch(err=>{
    resp.send(err)
})  
    // resp.send("get calling by id")
})

router.put("/users/:id",(req,resp)=>{
resp.send("put calling by id")
})

