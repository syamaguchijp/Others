# coding: utf-8

class User:
    # クラス変数（Public）
    className = None

    # コンストラクタ
    def __init__(self, name, age):
        # インスタンス変数（Public）
        self.name = name
        self.age = age
        # インスタンス変数（Private）
        self.__address = None

    # デストラクタ
    def __del__(self):
        print("destructor")

    # プロパティ（ゲッター）
    @property
    def address(self):
        return self.__address

    # プロパティ（セッター）
    @address.setter
    def address(self, address):
        self.__address = address

    # インスタンスメソッド
    def dump(self):
        return ("name: %s, age: %d, address: %s"
         % (self.name, self.age, self.address))

    # クラスメソッド
    @classmethod
    def classMethod(cls):
        print("class_method")

    # スタティックメソッド
    @staticmethod
    def staticMethod():
        print("static_method")

# 継承
class SpecialUser (User):
    # オーバーライド
    def dump(self):
        return ("SubClass name: %s, age: %d, address: %s"
         % (self.name, self.age, self.address))


# 生成
user1 = User("Honda", 27)
str1 = user1.dump()
print(str1)

# プロパティへのアクセス
user1.address = "Tokyo"
print(user1.address)

# クラス変数
User.className = "ABC"
print(User.className)

# クラスメソッドとスタティックメソッド
User.classMethod()
User.staticMethod()

# サブクラス
user2 = SpecialUser("Kawasaki", 33)
str2 = user2.dump()
print(str2)