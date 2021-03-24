#include <stdio.h>

// 関数ポインタのプロトタイプ宣言
typedef int (*FuncPtr)(int w, int h);

// 関数
int findArea(int w, int h) {
    return w * h;
}

int main(void) {

    int ans = findArea(10, 20);
    printf("The Area is %d.\n", ans);
    
    // typedefを利用した関数ポインタ
    FuncPtr pt = &findArea;
    ans = (pt)(20, 40);
    printf("The Area is %d.\n", ans);

    // 関数ポインタを直接表現
    int (*fp)(int, int) = findArea;
    ans = (*fp)(40, 60);
    printf("The Area is %d.\n", ans);

    return 0;
}