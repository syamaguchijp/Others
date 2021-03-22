#include <stdio.h>
#include <iostream>
#include <regex>

using namespace std;

int main(void) {

    // C言語
    // char型の配列で文字列を表現する。
    char str[6]; // 末尾にはnull文字（文字コード0）が格納されるため、文字数プラス1の配列
    strcpy(str, "Hello");   
    cout << str << "\n";

    // C++ stringクラスがある
    string str2 = "Honda";
    printf("%s \n", str2.c_str());

    // 結合
    str2 += "Yamaha";
    printf("%s \n", str2.c_str());

    // 更新
    str2 = "Kawasaki";
    printf("%s \n", str2.c_str());

    // 文字列長
    printf("length=%d \n", str2.length());

    // 比較
    if (str2 == "Kawasaki") {
        printf("str2 == Kawasaki \n");
    }

    // 置換
    str2 = "ABCDEFG";
    str2.replace(0,2, "XX"); // 開始位置, 長さ, 置換する文字列
    printf("%s \n", str2.c_str());
    string str3 = regex_replace(str2, regex("FG"), "ZZ"); // 対象の文字列, regex(正規表現を指定),置換する文字
    printf("%s \n", str3.c_str());


    return 0;
}