#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class User {

    string nickname; // private

public: // クラスはデフォルトはprivate修飾子
    string name;
    int age;
    bool isMale;

    // コンストラクタ
    User(string n, int a) {
        printf("Constructor\n");
        this->name = n;
        this->age = a;
        this->nickname = n + "ちゃん";
        this->isMale = true;
    };

    // コピーコンストラクタ
    // * 変数の初期化時
    // * メソッドに与える引数
    // * メソッドからの返り値
    User(const User &obj) {
        printf("Copy Constructor\n");
    }

    // 代入演算子
    // * 初期化済み変数への代入時
    User& operator = (const User& obj) {
        cout << "Insert" << endl;
        return *this;
    }

    // デストラクタ（インスタンス破棄時）
    ~User() {
        // メモリを確保した場合の解放処理などに使う
        printf("%s 破棄されました。\n", name.c_str());
    };

    // 関数
    string getNickname(){ return nickname; };

    // スタティック
    static inline int userMax = 10000; // since C++17
    static string getGreeting() {
        return "こんにちは";
    }
};

// 継承
class SpecialUser: public User {

public:
    SpecialUser(string n, int a) : User(n, a) { }

    // オーバーライド
    string getNickname(){ return "あだ名はありません"; };
};

int main(void) {

    User user1 = User("Honda", 19);
    printf("%s %d %d %s\n", user1.name.c_str(), user1.age, user1.isMale, user1.getNickname().c_str());

    User user3 = User("Kawasaki", 30); // (1)コンストラクタの実行
    User user2 = user1; // (2)コピーコンストラクタの実行（変数宣言と同時に代入によってuser1に初期化される時）
    user3 = user1; // (3)代入演算子の実行（初期化済み変数への代入時）
    printf("user1=%p user2=%p user3=%p \n", &user1, &user2, &user3);

    // スタティック
    printf("%d %s\n", User::userMax, User::getGreeting().c_str());

    // ポインタ変数
    User *u2 = new User("Yamaha", 24); // 動的なインスタンスの生成
    // ポインタのメンバを読み書きするときは、アロー演算子 pt->name または (*pt).name を使ってアクセスする。
    printf("%s %d %d %s\n", u2->name.c_str(), (*u2).age, u2->isMale, u2->getNickname().c_str());
    delete u2; // 意図的なインスタンスの破棄

    // 継承
    SpecialUser su = SpecialUser("Suzuki", 33);
    printf("%s %d %d %s\n", su.name.c_str(), su.age, su.isMale, su.getNickname().c_str());

    return 0;
}