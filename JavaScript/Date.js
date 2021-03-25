
// 現在の日時
var date1 = new Date().toLocaleString({timeZone: 'Asia/Tokyo'})
console.log(date1)

// 日時文字列から生成
date1 = new Date('2021/01/07 07:30').toLocaleString({timeZone: 'Asia/Tokyo'})
console.log(date1)

// 年月日時分から生成（月は1を引く）
date1 = new Date(2021, 1-1, 7, 7, 30).toLocaleString({timeZone: 'Asia/Tokyo'})
console.log(date1)

// ミリ秒から生成
date1 = new Date(1617206523000)
console.log(date1)

// 現在のミリ秒を取得
console.log(new Date().getTime())

// 文字列からミリ秒へ
var millsec = Date.parse('2021-04-01T01:02:03+09:00')
console.log(millsec)
console.log(new Date(millsec))

// 文字列からDateへ
date1 = new Date('2021-04-01T01:02:03+09:00')
console.log(date1)

// Dateから文字列
date1 = new Date()
dateStr = date1.toISOString()
console.log(dateStr)

// 年月日時分秒を個別に設定
date1 = new Date()
date1.setFullYear(2022)
date1.setMonth(3)
date1.setDate(7)
date1.setHours(01)
date1.setMinutes(02)
date1.setSeconds(16)
date1.setMilliseconds(55)

// 年月日時分秒を個別に取得
year = date1.getFullYear()
month = date1.getMonth() + 1
date = date1.getDate()
day = date1.getDay() // 曜日（日曜日(0)～土曜日(6））
hour = date1.getHours()
min = date1.getMinutes()
sec = date1.getSeconds()
msec = date1.getMilliseconds()
console.log( year + '年' + month + '月' + date + '日' + hour + '時' + min + '分' + sec + '秒.' + msec)

// 日時の比較
date1 = new Date('2020/8/1')
date2 = new Date('2020/8/2')
console.log(date2 > date1) // true