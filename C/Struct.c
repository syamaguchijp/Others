#include <stdio.h>

struct User {
    char *name;
    int age;
};

typedef struct {
    char *name;
    int age;
} Dog;

int main(void) {

    // 生成
    struct User user1;
    user1.name = "Honda";
    user1.age = 19;
    printf("name=%s age=%d\n", user1.name, user1.age);

    // 生成（一括初期化）
    struct User user2 = {"Yamaha", 21};
    printf("name=%s age=%d\n", user2.name, user2.age);

    // ポインタとアロー演算子
    struct User *pt1;
    pt1 = &user1;
    pt1->age = 20;
    printf("name=%s age=%d\n", user1.name, user1.age);
    printf("name=%s age=%d\n", pt1->name, pt1->age);

    // 実体をコピー
    struct User *pt11;
    struct User user11 = {"Kawasaki", 30};
    pt1 = &user11;
    struct User user12, *pt2;
    pt2 = &user12;
    *pt2 = *pt1; // アドレス先の値を共有
    printf("name=%s age=%d\n", user11.name, user11.age);
    printf("name=%s age=%d\n", user12.name, user12.age);
 

    return 0;
}