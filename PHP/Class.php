<?php

class User {

    // プロパティ
    public $name;
    private $nickname;

    // 定数
    public const TEISUU = "teisuu";

    // コンストラクタ
    public function __construct(string $name) {
        $this->name = $name;
    }

    // ゲッター
    public function get_nickname() {
        return $this->nickname."ちゃん";
    }
    // セッター
    public function set_nickname($nickname) {
        $this->nickname = $nickname;
    }

    // メソッド
    public function test(): string {
        echo "親クラスのtest\n";
        return $this->name;
    }

    // static
    public static $hoge = "HOGE";
    public static function hogehoge() {
        echo "static function hogehoge\n";
    }
}

// 継承
class SpecialUser extends User{

    // メソッドのオーバーライド
    public function test(): string {
        echo "子クラスのtest\n";
        parent::test(); // 親クラスのメソッドをコールしたい時
        return $this->name;
    }
}

$user = new User("Honda");
echo $user->name."\n"; // プロパティ
echo User::TEISUU."\n"; // const
echo User::$hoge."\n"; // static
var_dump($user);

User::hogehoge(); // static method

$user->set_nickname("hon");
echo $user->get_nickname()."\n";

$temp = $user->test();
echo $temp."\n";

echo "-----------\n";

// 子クラス
$suser = new SpecialUser("Yamaha");
echo $suser->name."\n";
var_dump($suser);
$temp = $suser->test();
echo $temp."\n";

?>