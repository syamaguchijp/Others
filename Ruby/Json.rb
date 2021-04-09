require 'json'

# 文字列からオブジェクトへ
hash = JSON.parse('{"honda":{"cb":400},"kawasaki":{"z2":750}}')
p hash

# オブジェクトから文字列へ
str = JSON.generate({"honda":{"cb":400},"kawasaki":{"z2":750}})
p str

