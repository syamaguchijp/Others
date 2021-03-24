#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main(void) {

    char a = 'A'; // シングルクオテーションの場合は末尾にnull文字が挿入されない
    char b = 'B';
    char c = 'C';
    printf("%c%c%c\n", a, b, c);

    // 文字コード表示
    printf("Aの文字コードは: %d\n", a);

    // (1) 文字列サイズを指定し宣言する方法
    {
        char str[6]; // 末尾にはnull文字（文字コード0）が格納されるため、文字数プラス1の要素数の配列
        strcpy(str, "Hello"); // str = "Hello"; ではダメ。文字列をコピーして渡す。
        printf("%s\n", str); 
        char str1[] = "Hello"; // 要素数を指定しなくてもよい
        printf("%s\n", str1);
    }

    // (2) ポインタを使って宣言する方法
    {
        char *str3 = "Hello"; // char型のポインタの宣言と初期化
        printf("%s\n", str3);

        for (int i = 0; i < sizeof(str3); i++) { // sizeofではなくstrlenでもよい
            //printf("%d番目=%c\n", i + 1, str3[i]);
        }
    }
    
    // アドレスの比較
    char str6[256] = "ABC";
    char str7[] = "ABC";
    if (str6 != str7) {
        printf("アドレスは違います。\n");
    }
    
    // 文字列の比較
    if (strcmp(str6, str7) == 0) {
        printf("同じ文字列です。\n");
    }

    // 文字列の連結
    char str4[256] = "ABC"; // 結合後の文字列長が確保されていなければならないことに注意
    char str5[] = "DEF";
    strcat(str4, str5);
    printf("%s\n", str4);

    // 文字列のコピー
    // Shallow Copy
    {
        char char2[10] = "Yamaha";
        char *pstr1;
        char *pstr2 = char2;
        pstr1 = pstr2;
        char2[0] = 'H'; // pstr1にも影響される
        printf("%s %s\n", pstr1, pstr2);
    }
    // Deep Copy
    {
        char char1[10];
        char char2[10] = "Yamaha";
        strcpy(char1, char2);
        char2[0] = 'H'; // char1
        printf("%s %s\n", char1, char2);
    }

    // カンマを区切りに文字列を分割
    {
        char str8[32] = "Tokyo,Niigata,Hakata";
        char *pt8;
        // 1回目
        pt8 = strtok(str8, ",");
        printf("%s\n", pt8);
        // 2回目以降
        while (pt8 != NULL) {
            pt8 = strtok(NULL, ",");
            if (pt8 != NULL) {
                printf("%s\n", pt8);
            }
        }
    }

    // 文字列の動的な確保

    char *pt = malloc(20 + 1); // 20文字分
    strcpy(pt, "Hello, everyone.");
    printf("%s\n", pt);
    printf("%p\n", pt);
    free(pt); //メモリの解放
    
    // 文字列の配列の動的な確保
    {
        // 文字列の配列を、ポインタの配列によって表現する
        int num = 5; // 配列の要素数
        char **pt; // char型のポインタのポインタ
        // メモリ領域の確保
        pt = (char **)calloc(num, sizeof(char *));
        if (pt == NULL) {
            return -1;
        }
        int i;
        // 配列のすべての要素に空ポインタを代入しておく
        for (i = 0; i < num; i++) {
            pt[i] = NULL;
        }
        // 配列のすべての要素に文字列を代入する
        for (i = 0; i < num; i++) {
            char temp[] = "TOKYO";
            pt[i] = (char *)malloc(strlen(temp) + 1);
            if (pt[i] == NULL) {
                return -1;
            }
            strcpy(pt[i], temp);
        }
        for (i = 0; i < num; i++) {
            printf("pt[%d]=%s\n", i, pt[i]);
        }
        // 最後にメモリを解放する
        for (i = 0; i < num; i++) {
            free(pt[i]);
        }
        free(pt);
    }

    // マルチバイト文字
    {
        setlocale(LC_CTYPE, "ja_JP.UTF-8");
        char mstr1[] = "ホンダ";
        printf("%s\n", mstr1);
        // メモリ領域を確保
        size_t capacity = strlen(mstr1) + 1;
        wchar_t *mstr2 = (wchar_t *)malloc(sizeof(wchar_t) * capacity);
        // char型から wchar_t型（マルチバイト）へ変換
        int result = mbstowcs(mstr2, mstr1, capacity);
        if (result <= 0) {
            return -1;
        }
        // メモリ領域を確保
        capacity = wcslen(mstr2) * 3 + 1; // 「ホンダ」= 3文字
        char* mstr3 = (char *)malloc(sizeof(char) * capacity);
        // wchar_t型（マルチバイト）から char型へ変換
        result = wcstombs(mstr3, mstr2, capacity);
        if (result <= 0) {
            return -1;
        }
        printf("%s\n", mstr3);
    }

    return 0;
}