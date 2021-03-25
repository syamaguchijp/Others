# coding: utf-8

# 文字列内の変数利用
print("name: %s, age: %d, isMale: %r" % ("Honda", 21, True))
print("name: {0}, age: {1}, isMale: {2}".format("Honda", 21, True))
print("name: {}, age: {}, isMale: {}".format("Honda", 21, True))

# 一致判定
s = "ABCDEFG"
if s == "ABCDEFG":
    print("一致")

# 長さ
print(len(s))

# 切り出し
print(s[1:4]) # BCD
print(s[2:]) # CDEFG
print(s[:3]) # ABC
print(s[:]) # ABCDEFG

# 検索
print("BCD" in s) # True
print(s.find("CDE")) # 2
print(s.startswith("ABC"))
print(s.endswith("EFG"))

# 分割
s = "A,B,C,D,E"
list = s.split(',')
print(list)

# 結合
print(",".join(list)) 
print("ABC" + "EFG")
print("ABC" * 3) 

# 大文字小文字
print("abc".upper())
print("ABC".lower())
print("abc".capitalize())

# 置換
s = "ABCDABCD"
print(s.replace("ABC", "ZZZ"))
print(s.replace("ABC", "ZZZ", 1)) # 置換回数1回のみ

# 前後の空白を削除
s = " ab cd "
print(s.strip())
print(s.lstrip()) # 前のみ
print(s.rstrip()) # 後ろのみ

# 数値と文字列
print(str(100))
print(int('100'))