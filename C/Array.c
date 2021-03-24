#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // //////// 配列

    int intArray[] = {0, 1, 2, 3, 4};
    intArray[4] = 999;

    // 走査

    for (int i = 0; i < sizeof(intArray)/sizeof(intArray[0]); i++) {
        printf("%d\n", intArray[i]);
    }

    int *pt1 = intArray;// int[]と同じ型のポインタの宣言。pt1 = &intArray[0]
    for(int i = 0; i < 5; i++) {
        printf("%d\n", *(pt1+i));
    }

    printf("intArrayのポインタの先頭は、%p\n", intArray); // []を伴わない配列名は、配列の先頭要素のポインタと解釈される

    // Deep Copy

    int intArray2[5];
    memcpy(intArray2, intArray, sizeof(int) * 5);
    intArray[4] = 8888; // intArray2には影響しない
    for (int i = 0; i < 5; i++) {
        printf("intArray2 %d\n", intArray2[i]);
    }
    printf("intArray2のポインタの先頭は、%p\n", intArray2);
 
    // Shallow Copy

    int *intArray3 = intArray; // []を伴わない配列名は、配列の先頭要素のポインタ
    intArray[0] = 777; // intArray3に影響する
    for (int i = 0; i < 5; i++) {
        printf("intArray3 %d\n", intArray3[i]);
    }
    printf("intArray3のポインタの先頭は、%p\n", intArray3);

    // 配列の動的な生成と要素数の変更

    // メモリの確保
    int size = 10;
    int *ary = (int*)malloc(sizeof(int) * size);
    if (ary == NULL) {
        return -1;
    }
    // 配列の初期化
    for (int i = 0; i < size; i++) {
        ary[i] = i + 1;
        printf("before ary[%d]: %d\n", i, ary[i]);
    }
    //　要素数の変更のため、メモリを再確保
    int resize = 3;
    ary = (int*)realloc(ary, sizeof(int) * resize);
    if (ary == NULL) {
        return -1;
    }
    for (int i = 0; i < resize; i++) {
        ary[i] = i * 5;
    }
    for (int i = 0; i < resize; i++){
        printf("after ary[%d]: %d\n", i, ary[i]);
    }
    // メモリ解放
    free(ary);

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
    


    return 0;
}
