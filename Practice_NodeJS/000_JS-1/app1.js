const yargs = require ("yargs")
const fs = require ("fs")

yargs.command({
    command: "create",
    handler:function (argv){
        fs.writeFileSync("data.txt")
    }
})
yargs.command({
    command: "remove",
    handler: function(argv){
        fs.unlinkSync("data.txt")
    }
})

yargs.argv