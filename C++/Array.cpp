#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(void) {

    // //////// 配列

    int intArray[] = {0, 1, 2, 3, 4};

    for (int i = 0; i < sizeof(intArray)/sizeof(intArray[0]); i++) {
        printf("%d\n", intArray[i]);
    }
    // コピーを使う
    for (int x : intArray) {
        printf("%d\n", x);
    }
    // 配列の参照を使う
    int i = 0;
    for (int& x : intArray) {
        x = 100; // ここに値を入れると、配列自体の値が書き換わる
        printf("%d\n", intArray[i]);
        i++;
    }

    printf("intArrayのポインタの先頭は、%p", intArray); // []を伴わない配列名は、配列の先頭要素のポインタと解釈される

    // 配列の動的な生成

    int *ap; // 配列の先頭を示すポインタ変数
    ap = new int[3];
    ap[0] = 99;
    ap[1] = 98;
    ap[2] = 97;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", ap[i]);
    }
    delete [] ap; // 動的に生成した配列を破棄（メモリリーク防止）

    // 多次元配列

    int array[2][3];
    int cnt = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = cnt;
            cnt++;
        }
    }
    for (int i = 0; i < 2; i++) {
        printf("array[%d]=%p \n", i, array[i]); // = &array[i][0] 部分配列の先頭要素へのポインタ
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]=%d %p \n", i, j, array[i][j], &array[i][j]);
            printf("array[%d,%d]=%p \n", i, j, array[i, j]); // コンマ演算子 部分配列の先頭要素へのポインタ
            cnt++;
        }
    }

    // //////// 可変長配列 std::vector<>

    vector<int> vector;
    //std::vector<int> vector(10); // 要素数を指定
    //std::vector<int> vector(10, 100); // 要素数と初期値を指定 

    // 要素を末尾に追加
    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    vector.push_back(40);
    vector.push_back(50);
    
    // 要素の末尾を削除
    vector.pop_back();

    // 任意の位置の要素を削除
    vector.erase(vector.begin() + 1); // 2番目を削除

    // 値の更新
    vector[0] = 1000;

    // 走査
    for (int i = 0; i < vector.size(); i++) {
        printf("%d\n", vector[i]);
    }
    for(int x : vector) {
        printf("%d\n", x);
    }

    if( !vector.empty() ) {
        printf("vectorは空ではありません。\n");
    }



    // //////// 連想配列 std:map<>

    map<string, int> map;
    map["a"] = 0;
    map["b"] = 1;
    map["c"] = 2;
    map["d"] = 3;

    // 削除
    auto itr = map.find("c");
    if (itr != map.end()) // キーの要素が存在している場合
        map.erase(itr); // 削除

    // 値の更新
    map["d"] = 10000;

    // 走査
    for (auto itr = map.begin(); itr != map.end(); ++itr) {
        //printf("%s %d\n", itr->first.c_str(), itr->second);
        cout << "key = " << itr->first
                        << ", val = " << itr->second << "\n"; 
    }



    // //////// セット型

    set<int> st;
    st.insert(7);
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(10);
    for (auto itr = st.begin(); itr != st.end(); ++itr) {
        cout << *itr;
    }


    return 0;
}