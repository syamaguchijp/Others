class User
    # インスタンス変数
    @name = ""
    @age = 0

    # イニシャライザ
    def initialize(name)
      puts 'initialize'
      @name = name
    end

    # インスタンスメソッド
    def compute(num1, num2)
        puts 'User Compute'
        return num1 * num2
    end

    # ゲッター
    def getName
        @name
    end
    def getAge
        @age
    end

    # セッター
    def setName=(name)
        @name = name
    end
    def setAge=(age)
        @age = age
    end

    # クラス変数
    @@classVar = "hoge"

    # クラスメソッド
    class << self
        def classMethod
          puts @@classVar
        end
    end
end

# 継承
class SpecialUser < User
    # オーバーライド
    def compute(num1, num2)
        puts 'SpecialUser Compute'
        super # 自動的に引数が渡される
        #return num1 * num2 * 2
    end
end


user = User.new("Honda")
p user.compute(10, 20)
p user.getName
user.setAge = 30
p user.getAge

User.classMethod

specialUser = SpecialUser.new("Kawasaki")
p specialUser.compute(10, 20)

