
var str = "ABCDEFG" // String型
str = 'ABCDEFG' // String型
str = new String("ABCDEFG") // あまり使われることはない。Object型になるため、===の利用に注意

// 文字列内の変数利用
str = `str = ${str}` // バッククォート
console.log(str)

// 一致判定
str = "ABCDEFG"
if (str == "ABCDEFG") {
    console.log("一致")
}
if (str === "ABCDEFG") {
    console.log("型も値も一致")
}

// 長さ
console.log(str.length)

// 切り出し
console.log(str.substring(2)) // CDEFG
console.log(str.substring(2, 4)) // CD

// 検索
console.log(str.indexOf("CDE")) // 2
console.log(str.includes("CDE")) // true
console.log(str.startsWith("ABC")) // true
console.log(str.endsWith("EFG")) // true
console.log(str.match(/def/i))

// 分割
str = "A,B,C,D,E"
var ary = str.split(",")
console.log(ary)

// 結合
console.log("ABC".concat("DEF", "GHI", "JKL"))

// 大文字小文字
console.log("abcde".toUpperCase())
console.log("ABCDE".toLowerCase())

// 置換
console.log("ABCDE".replace("ABC", "ZZZ"))

// 前後の空白を削除
str = " ab cd "
console.log(str.trim()) // 前後をtrim
console.log(str.trimStart()) // 前のみtrim
console.log(str.trimEnd()) // 後のみtrim

// 数値と文字列の相互変換
console.log(String(123))
console.log(parseInt("1234"))
