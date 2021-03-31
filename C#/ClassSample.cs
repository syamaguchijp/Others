using System;

class ClassSapmle {

    public ClassSapmle() {

        var user = new User("Honda");
        user.nickname = "Honchan";
        user.age = 27;
        Console.WriteLine(user.getMyself());

        // static
        User.dump();

        // 継承
        var specialUser = new SpecialUser("Yamaha");
        specialUser.age = 35;
        Console.WriteLine(specialUser.getMyself());
    }
}

class User {

    // メンバ変数
    public string name; // アクセス修飾子を何も付けない場合のデフォルトはinternal
    
    // プロパティ（getterとsetter）
    private string _nickname;
    public string nickname
	{
		get { return _nickname; }
		set { _nickname = value; }
	}

    // プロパティ（getterとsetterの自動実装）
    public int age { get; set; }

    // 読み取り専用
    public string name2 { get;} = "Hoge";

    // コンストラクタ
    public User(string name) {
        this.name = name;
    }

    public string getMyself() {
        return $"name = {name}, age = {age}, nickname = {nickname}";
    }

    // static
    public static readonly int DefaultLimit = 10;
    public static void dump() {
        Console.WriteLine("static method!");
    }
}

// 継承
class SpecialUser: User {

    // コンストラクタ
    public SpecialUser(string name): base(name) {
    }

    // オーバーライド
    public new string getMyself() {
        return $"name = {name}, age = {age}, nickname = {nickname}";
    }
}
