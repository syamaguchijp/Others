# coding: utf-8

# 数値（イミュータブル）
def test1(val):
    val *= 2
    print(val)

testVal = 1
test1(testVal)
print(testVal) # 変更が呼び出し元には影響しない（値型）

# 文字列（イミュータブル）
def test2(val):
    val += "さん"
    print(val)

testVal = "Honda"
test2(testVal)
print(testVal) # 変更が呼び出し元には影響しない（値型）

# 配列
def test3(val):
    val.append("Suzuki")
    print(val)

testVal = ["Honda", "Yamaha", "Kawasaki"]
test3(testVal)
print(testVal) # 呼び出し元も変更される（参照型）

# 辞書
def test4(val):
    val["niigata"] = 3
    print(val)

testVal = {"tokyo": 0, "osaka": 1, "hakata": 2}
test4(testVal)
print(testVal) # 呼び出し元も変更される（参照型）

# クラス
class User:
    def __init__(self, name):
        self.name = name

def test5(val):
    val.name = "Yamaha"
    print(val.name)

testVal = User("Honda")
test5(testVal)
print(testVal.name) # 呼び出し元も変更される（参照型）

