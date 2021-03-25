
// JSONオブジェクト
var json = [
    {
        "name": "Honda",
        "age": "21",
        "address": "Tokyo"
    },
    {
        "name": "Yamaha",
        "age": "35",
        "address": "Osaka"
    },
]

console.log(json[0].name)
console.log(json[1].age)

// 要素の追加
json.push({
    "name": "Kawasaki",
    "age": "42",
    "address": "Hakana"
})
console.log(json[2].address)

// 要素の削除
delete json[2].address
console.log(json[2].address)
console.log(json[2].name)
delete json[2]
console.log(json[2])

// 文字列からJSONへ
var str = JSON.stringify({ x: 1, y: 100 })
console.log(str)

// 文字列からJSONへ
json = JSON.parse(str)
console.log(json)

