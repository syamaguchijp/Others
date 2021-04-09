# 値渡し

# 数値
def test1(num)
    num *= 2
    printf("test1 %d\n", num)
end
val1 = 10
test1(val1)
printf("%d\n", val1)

# 文字列
def test2(str)
    str += "ZZZ"
    printf("test2 %s\n", str)
end
val2 = "ABC"
test2(val2)
printf("%s\n", val2)

# 文字列 [破壊的メソッド実行時]
def test12(str)
    str.upcase!
    printf("test12 %s\n", str)
end
val12 = "abc"
test12(val12)
printf("%s\n", val12) # 元の値も変更されABCとなる。Rubyではオブジェクトとしてメソッドに引数を渡すため。

# 配列（参照型）
def test3(ary)
    ary[0] = 999
    printf("test3")
    p ary
end
val3 = [1, 2, 3, 4, 5]
test3(val3)
p val3

# ハッシュ（参照型）
def test4(hash)
    hash["Honda"] = 999
    printf("test4")
    p hash
end
val4 = {"Honda" => 1, "Yamaha" => 2, "Kawasaki" => 3}
test4(val4)
p val4

# クラス（参照型）
class User
    @name = ""
    def name
        @name
    end
    def name=(name)
        @name = name
    end
end
def test5(obj)
    obj.name = "Yamaha"
    printf("test5 %s\n", obj.name)
end
val5 = User.new()
val5.name = "Honda"
test5(val5)
printf("%s\n", val5.name)

