
///////// 配列 /////////

var arr = new Array() // 空の配列
arr = new Array(3) // 要素数3の空配列
arr = new Array("Honda", "Yamaha", "Kawasaki")
arr = ["Honda", "Yamaha", "Kawasaki"]
console.log(arr)

// 要素の追加
console.log(arr.push("Suzuki")) // 末尾に追加

// 要素の削除
arr = arr.slice(1) // 2番目の要素から末尾までをスライスして残す（=先頭を削除）
console.log(arr); 
arr = ["Honda", "Yamaha", "Kawasaki", "Suzuki"].slice(0, 3) // 0番目から数えて3つの要素を取り出す（=末尾を削除）
console.log(arr); 

// 配列の要素数
console.log(arr.length)

// 走査
for (const elem of arr) {
    console.log(elem);
}
arr.forEach(function(elem, index) {
    console.log(index + ': ' + elem);
})
arr.forEach((elem, index) => {
    console.log(`${index}: ${elem}`);
})
arr.forEach(elem => console.log(elem))
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i])
}

// 存在確認
arr = ["Honda", "Yamaha", "Kawasaki", "Suzuki"]
if (arr.indexOf("Honda") >= 0) {
    console.log("contains Honda")
}

// ShallowCopy
var arr2 = arr // 参照
arr2[0] = "Harley"
console.log(arr[0])
console.log(arr2[0]) // 変更がコピー元にも反映されてしまっている

var arr3 = ["Honda", "Yamaha", "Kawasaki", "Suzuki"]
var arr4 = Array.from(arr3);
arr4[0] = "Harley"
console.log(arr3[0])
console.log(arr4[0]) // 変更がコピー元に反映されていない

// 多次元配列
let hiragana = [
    ["あ","い","う","え","お"],
    ["か","き","く","け","こ"],
    ["さ","し","す","せ","そ"],
    ["た","ち","つ","て","と"]
]
console.log(hiragana[3][0])


///////// セット /////////

// 生成
var set = new Set() // 空
set = new Set([1, 2, 3, 1, 1, 4]) // 配列から生成

// 追加と削除
set.add(5);
set.delete(2)
console.log(set)

// 要素数
console.log(set.size)

// 全削除
set.clear()
console.log(set)

// 存在確認
set = new Set([1, 2, 3, 1, 1, 4])
if (set.has(2)) {
    console.log("存在確認")
}

// 走査
for (let value of set) {
    console.log(value);
}


///////// 連想配列 /////////

var dict = {}; // 空
dict = {name: "Honda", nickname: "Hon", age: 21, isMale: true} // 初期化

// 要素の追加
dict.country = "Japan" // チェーンで追加する方法
dict['town'] = "Tokyo" // 添字で追加する方法

// 要素の削除
delete dict['nickname']

// 走査
for (var key in dict) {
    console.log(`${key}: ${dict[key]}`)
}
var keys = Object.keys(dict);
for (var i=0; i < keys.length; i++) {
    console.log(`${keys[i]}: ${dict[keys[i]]}`)
}
Object.keys(dict).forEach(function(value) {
    console.log( value + ': ' + this[value] )
}, dict)


