
// 値型（intやStringなどのプリミティブ）

// int
var arg = 10
test1(arg)
console.log(arg)
function test1(param) {
    param += 10
    console.log(param)
}

// String
arg = "あいうえお"
test2(arg)
console.log(arg)
function test2(param) {
    param = "かきくけこ"
    console.log(param)
}

// 参照型

// 配列
arg = ["Honda", "Yamaha", "Kawasaki"]
test3(arg)
console.log(arg)
function test3(param) {
    param.push("Suzuki")
    console.log(param)
}

// 連想配列
arg = {name: "Honda", nickname: "Hon", age: 21, isMale: true}
test4(arg)
console.log(arg)
function test4(param) {
    param.name = "Yamaha"
    console.log(param)
}

// クラス
class User {
    constructor(name, age) {
        this.name = name
        this.age = age
    }
}
arg = new User("Honda", 27)
test5(arg)
console.log(arg)
function test5(param) {
    param.name = "Yamaha"
    console.log(param)
}
