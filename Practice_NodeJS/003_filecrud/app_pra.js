const yargs = require("yargs")
yargs.command({
    command:"add",
    builder:{
        name:{
            type:String
        },
        email:{
            type:String
        }
    },
    handler:function(argv){
        //console.log("add calling");
        console.log(argv.name+" "+argv.email);
    }
})

yargs.command({
    command:"remove",
    builder:{
        fname:{
            type:String
        }
    },
    handler:function(argv){
        console.log(argv.fname);
    }
})

yargs.argv