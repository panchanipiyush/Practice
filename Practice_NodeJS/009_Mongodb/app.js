const mongodb = require("mongodb")
const MongoClient = mongodb.MongoClient

const DB_URL = "mongodb://127.0.0.1:27017";
const database ="24jan";

MongoClient.connect(DB_URL).then(result=>{
    console.log("db connected");

    const mydb = result.db(database)

    // mydb.createCollection("Myemp").then(result=>{
    //     console.log("Collection created");
    // }).catch(err=>{
    //     console.log(err);
    // })

    // mydb.dropCollection("product").then(result=>{
    //     console.log("Collection droped");
    // }).catch(err=>{
    //     console.log(err);
    // })

    // mydb.collection("emp").insertOne({name:"milan",email:"milan@gmail.com"}).then(result=>{
    //     console.log(result);
    // }).catch(err=>{
    //     console.log(err);
    // })

    // var e1 = { name: "Sanket", email: "sanket@gmail.com", dept: "node", sal: 5000 }
    // var e2 = { name: "Piyush", email: "piyush@gmail.com", dept: "java", sal: 8000 }
    // var e3 = { name: "Jay", email: "jay@gmail.com", dept: "php", sal: 4000 }
    // mydb.collection("emp").insertMany([e1,e2,e3]).then(result => {
    //     console.log(result);
    // }).catch(err => {
    //     console.log(err);
    // })

    
    // mydb.collection("emp").updateOne({name:"milan"},{$set:{email:"milan@ymail.com"}}).then(result=>{
    //     console.log("dataupdated");
    // }).catch(err=>{
    //     console.log(err);
    // })

    // mydb.collection("emp").deleteOne({ name: "Rutvik" }).then(result => {
    //     console.log(result);
    // }).catch(err => {
    //     console.log(err);
    // })


    // mydb.collection("emp").find().toArray().then(result => {
    //     console.log(result);
    // }).catch(err => {
    //     console.log(err);
    // })

    // mydb.collection("emp").find({ name: 'Piyush' }).toArray().then(result => {
    //     console.log(result);
    // }).catch(err => {
    //     console.log(err);
    // })

    // mydb.collection("emp").findOne({ name: 'Piyush' }).then(result => {
    //     console.log(result.sal);
    // }).catch(err => {
    //     console.log(err);
    // })

    // mydb.collection("emp").find({}, { projection: { name: 1, _id: 0 } }).toArray().then(result => {
    //     console.log(result);
    // }).catch(err => {
    //     console.log(err);
    // })

    // mydb.collection("emp").find({ sal: { $ne: 8000 } }).toArray().then(result => {
    //     console.log(result);
    // }).catch(err => {
    //     console.log(err);
    // })

    mydb.collection("emp").find({ $and: [{ dept: { $eq: 'node' } }, { sal: { $gt: 5000 } }] }).toArray().then(result => {
        console.log(result);
    }).catch(err => {
        console.log(err);
    })


}).catch(err=>{
    console.log(err);
})
