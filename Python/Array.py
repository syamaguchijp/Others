# coding: utf-8

###### 配列 ######

# 生成
ary = [] # 空
ary = list() # 空
ary = ["Honda", "Yamaha", "Kawasaki"]
ary = list(["Honda", "Yamaha", "Kawasaki"])
print(ary)

# 要素の追加
ary.append("Suzuki")
print(ary)
ary.insert(1, "Harley") # 2番目に追加
print(ary)

# 要素の削除
del ary[1] # 2番目を削除
print(ary)
ary.remove("Suzuki") # 要素を指定して削除
print(ary)
ary.pop() # 末尾を削除
print(ary)

# 要素数
print(len(ary))

# 走査
for i in ary:
    print(i)
for index in range(len(ary)):
    print(str(index) + " : " + ary[index])
for index, item in enumerate(ary):
    print(str(index) + " : " + item)

# 存在確認
if "Honda" in ary:
    print("存在確認")

# 内包表記
squares = [i**2 for i in range(5)]
print(squares)
odds = [i for i in range(10) if i % 2 == 1]
print(odds)

# Shallow Copy
import copy
ary = [[1, 2], [3, 4]]
ary2 = copy.copy(ary)
ary2[1].append(5)
print(ary)
print(ary2)

# Deep Copy
ary = [[1, 2], [3, 4]]
ary2 = copy.deepcopy(ary)
ary2[1].append(5)
print(ary)
print(ary2)

# 多次元配列
print(ary[0][1])


###### 辞書 ######

# 生成
dict1 = {}
dict1 = {"tokyo": 0, "osaka": 1, "hakata": 2}
print(dict1)

# アクセス
print(dict1["osaka"])

# 要素の追加と削除
dict1["niigata"] = 3
dict1.setdefault("nagoya", 4)
print(dict1)
dict1.pop("nagoya")
print(dict1)

# 要素数
print(len(dict1))

# 存在確認
if "niigata" in dict1.keys():
    print("niigata exists")
if 1 in dict1.values():
    print("1 exists")

# 走査
for k in dict1.keys():
    print(k)
for v in dict1.values():
    print(v)
for k, v in dict1.items():
    print(k, v)
for t in dict1.items(): # タプルとして受け取る
    print(t[0])


###### セット ######

# 生成
set1 = set([3, 3, 1, 2, 1, 3, 2])
print(set1)

# 追加と削除
set1.add(4)
print(set1)
set1.remove(2)
print(set1)

# 要素数
print(len(set1))

# 存在確認
if 1 in set1:
    print("1 exists")

# 積集合
set2 = set([4, 7, 9, 5])
set3 = set1 & set2 # set1.intersection(set2)
print(set3)
