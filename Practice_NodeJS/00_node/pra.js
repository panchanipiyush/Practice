var a = 10
console.log(a);
console.log(typeof(a));

var b = "ABCD" // 'A'
console.log(b);
console.log(typeof(b));

var c = [1,2,'a',"abcdefgh"];
console.log(c);
console.log(typeof(c));

var myFun = (a,b) => // (a,b=5)
{
    console.log(a+b);
}
myFun(5,15);

var myFun2 = (a=[],b=[]) =>
{
    console.log((a),(b));
}
myFun2(x=[1,2,3],y=[1,2,3]);

function square(a) {
    return a * a;
}
var sq = square(5)
    console.log(sq);
    console.log(square(5));

var d = [10,20,30,10,40,50,60,70,80,90,100]
// console.log(d.length);
// console.log(d.shift());
// console.log(d.pop());
// console.log(d);
// d.unshift(99);
// d.push(999);
// console.log(d);
var g = ["i am very good","A","A","good"];

var f = d.find(ele =>{
    return ele==10
})
console.log(f);

var f = d.filter (ele =>{
    return ele==10;
})
console.log(f);


var f = g.find (ele => {
        return ele == 'A'
})
console.log(f);

var f = g.filter (ele => {
    return ele == 'A'
})
console.log(f);
