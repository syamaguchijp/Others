// ECMASCript2015 から追加

class User {
    // メンバ
    nickname

    // コンストラクタ
    constructor(name, age) {
        this.name = name
        this.age = age
    }

    // メソッド
    dump() {
        return `name = ${this.name}, age = ${this.age}`
    }

    // プロパティ
    // ゲッター
    get getNickname() {
        return this.nickname
    }
    // セッター
    set setNickname(nickname) {
        this.nickname = nickname
    }

    // Static
    static greeting() {
        return "User Test"
    }
}

// 継承
class SpecialUser extends User {
    // コンストラクタ
    constructor(name, age, address) {
        super(name, age) // 親のコンストラクタ
        this.address = address
    }
    // メソッドのオーバーライド
    dump() {
        return `name = ${this.name}, age = ${this.age}, address = ${this.address}`
    }
}


var user = new User("Honda", 27)
console.log(user.dump())

user.setNickname = "Honchan"
console.log(user.getNickname)

console.log(User.greeting())

var suser = new SpecialUser("Yamaha", 35, "Tokyo")
console.log(suser.dump())
