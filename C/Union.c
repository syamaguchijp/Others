#include <stdio.h>

// 共用体
union Location {
    int x;
    int y;
    int z;
};

int main(void) {

    union Location lk = {10, 50, -30}; // 宣言と初期化
    printf("location = %d, %d, %d\n", lk.x, lk.y, lk.z);

    // ポインタ
    union Location *pt = &lk;
    printf("location = %d, %d, %d\n", pt->x, pt->y, pt->z);

    return 0;
}