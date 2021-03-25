# coding: utf-8

import json

# 文字列からJSONへ
str1 =  "[{\"name\": \"Honda\", \"age\": 21, \"address\": \"Tokyo\"}, {\"name\": \"Yamaha\", \"age\": 35, \"address\": \"Osaka\"}]"
json1 = json.loads(str1)
print(json1)

# アクセス
print(json1[0]["name"])
print(json1[1]["age"])
for j in json1:
    print(j)
    print(j["name"])

# 追加と削除
json1.append({"name": "Kawasaki", "age": 99, "address": "Nagoya"})
print(json1)
del json1[2]
print(json1)

# JSONから文字列へ
str1 = json.dumps(json1)
print(str1)
