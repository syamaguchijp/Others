#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// ファイルへの出入力
int main(void) {

    ofstream fout; // 出力用
    ifstream fin; // 入力用
    string fileName = "log.txt";

    fout.open(fileName, ios::app); // app = append(上書き)
    if (!fout) {
        return -1;
    }
    fout << "あいうえお" << "\n";
    fout.close();
    
    fin.open(fileName);
    if (!fin) {
        return -1;
    }
    string s;
    while (true) {
        getline(fin, s);
        if (fin.eof()) { // ファイル末尾
            break;
        }
        printf("%s\n", s.c_str());
    }
    fin.close();

    return 0;
}