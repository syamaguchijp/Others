#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

class User {
public:
    string name;

    // コンストラクタ
    User() {
        printf("Constructor\n");
    };

    // コピーコンストラクタ
    // * 変数の初期化時
    // * メソッドに与える引数
    // * メソッドからの返り値
    User(const User &obj) {
        printf("Copy Constructor\n");
    }
};

struct Person {
    string name;
};

// 値渡し

void function1(int num) {
    num *= 2;
    printf("function1 %d\n", num);
}

void function2(string str) {
    str += "zzz";
    printf("function2 %s\n", str.c_str());
}

void function3(int array[]) {
    array[2] = 777;
    printf("function3 %d\n", array[2]);
}

void function4(map<string, int> map) {
    map["a"] = 888;
    printf("function4 %d\n", map["a"]);
}

void function5(User user) {
    user.name = "hoge";
    printf("function5 %s\n", user.name.c_str());
}

void function6(Person person) {
    person.name = "fuga";
    printf("function6 %s\n", person.name.c_str());
}

// ポインタ渡し

void function11(int *num) {
    if (num == nullptr) { return;}
    *num *= 2;
    printf("function11 %d\n", *num);
}

void function12(string *str) {
    if (str == nullptr) { return;}
    *str += "zzz";
    printf("function12 %s\n", (*str).c_str());
}

void function14(map<string, int> *map) {
    if (map == nullptr) { return;}
    (*map)["a"] = 888;
    printf("function14 %d\n", (*map)["a"]);
}

void function15(User *user) {
    if (user == nullptr) { return;}
    user->name = "hoge";
    printf("function15 %s\n", user->name.c_str());
}

void function16(Person *person) {
    if (person == nullptr) { return;}
    person->name = "fuga";
    printf("function16 %s\n", person->name.c_str());
}

// 参照渡し（C++）

void function21(int& num) {
    num *= 2;
    printf("function21 %d\n", num);
}

void function22(string& str) {
    str += "zzz";
    printf("function22 %s\n", str.c_str());
}

void function24(map<string, int>& map) {
    map["a"] = 888;
    printf("function24 %d\n", map["a"]);
}

void function25(User& user) {
    user.name = "hoge";
    printf("function25 %s\n", user.name.c_str());
}

void function26(Person& person) {
    person.name = "fuga";
    printf("function26 %s\n", person.name.c_str());
}

int main() {

    // int

    printf("----------- int\n");

    int num = 10;
    function1(num);
    printf("after function1 %d\n", num);

    int num2 = 10;
    function11(&num2);
    printf("after function11 %d\n", num2);

    int num3 = 10;
    function21(num3);
    printf("after function21 %d\n", num3);

    // string

    printf("----------- string\n");

    string str = "ABC";
    function2(str);
    printf("after function2 %s\n", str.c_str());

    string str2 = "ABC";
    function12(&str2);
    printf("after function12 %s\n", str2.c_str());

    string str3 = "ABC";
    function22(str3);
    printf("after function22 %s\n", str3.c_str());

    // 配列

    printf("----------- array\n");

    int intArray[] = {0, 1, 2, 3, 4};
    function3(intArray); // []を伴わない配列名は、配列の先頭要素のポインタと解釈される
    printf("after function3 %d\n", intArray[2]);

    // 辞書

    printf("----------- map\n");
    
    map<string, int> map;
    map["a"] = 0;
    function4(map); // コピーが渡される
    printf("after function4 %d\n", map["a"]);

    map["a"] = 0;
    function14(&map); 
    printf("after function14 %d\n", map["a"]);

    map["a"] = 0;
    function24(map); 
    printf("after function24 %d\n", map["a"]);

    // クラス

    printf("----------- class\n");

    User user = User();
    user.name = "Honda";
    function5(user); // 値渡しのためオブジェクトがコピーされて渡る。この時のみコピーコンストラクタがコールされる。
    printf("after function5 %s\n", user.name.c_str());

    User user2 = User();
    user.name = "Honda";
    function15(&user2);
    printf("after function15 %s\n", user2.name.c_str());

    User user3 = User();
    user.name = "Honda";
    function25(user3);
    printf("after function25 %s\n", user3.name.c_str());

    // 構造体

    printf("----------- struct\n");

    Person person = {"Yamaha"};
    function6(person); // 値渡しのためオブジェクトがコピーされて渡る
    printf("after function6 %s\n", person.name.c_str());

    Person person2 = {"Yamaha"};
    function16(&person2);
    printf("after function16 %s\n", person2.name.c_str());

    Person person3 = {"Yamaha"};
    function26(person3);
    printf("after function26 %s\n", person3.name.c_str());

    return 0;
}