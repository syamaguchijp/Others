#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    bool isMale = true;

    // コンストラクタ
    Person(string n, int a) {
        this->name = n;
        this->age = a;
        this->nickname = n + "ちゃん";
    };

    // 関数
    string getNickname(){ return nickname; };

private: // ここから下はprivate修飾子になる（構造体はデフォルトはpublic）
    string nickname;
};

int main(void) {

    Person p = Person("Honda", 19);
    printf("%s %d %d %s\n", p.name.c_str(), p.age, p.isMale, p.getNickname().c_str());

    // 構造体のポインタのメンバを読み書きするときは、アロー演算子 pt->name または (*pt).name を使ってアクセスする。
    Person *pt = &p;
    printf("%s %d %d %s\n", pt->name.c_str(), (*pt).age, pt->isMale, pt->getNickname().c_str());

    return 0;
}