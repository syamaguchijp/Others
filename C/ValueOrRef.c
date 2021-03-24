#include <stdio.h>
#include <string.h>

struct Person {
    char *name;
};

// 値渡し

void function1(int num) {
    num *= 2;
    printf("function1 %d\n", num);
}

void function4(struct Person person) {
    person.name = "fuga";
    printf("function4 %s\n", person.name);
}

// ポインタ渡し

void function11(int *num) {
    if (num == NULL) { return;}
    *num *= 2;
    printf("function11 %d\n", *num);
}

void function2(char *str) { // ポインタ
    if (str == NULL) { return;}
    str = "ZZZ";
    printf("function12 %s\n", str);
}

void function12(char **str) { // ポインタのポインタ
    if (str == NULL) { return;}
    *str = "ZZZ";
    printf("function12 %s\n", *str);
}

void function13(int array[]) {
    array[2] = 777;
    printf("function13 %d\n", array[2]);
}

void function14(struct Person *person) {
    if (person == NULL) { return;}
    person->name = "fuga";
    printf("function14 %s\n", person->name);
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

    // char

    printf("----------- string\n");

    char *str = "ABC";
    function2(str);
    printf("after function2 %s\n", str); // 受け渡し元のデータは変わらない

    char *str2 = "ABC";
    function12(&str2);
    printf("after function12 %s\n", str2); // ポインタのポインタを渡しているため、受け渡し元も変わる

    // 配列

    printf("----------- array\n");

    int intArray[] = {0, 1, 2, 3, 4};
    function13(intArray); // []を伴わない配列名は、配列の先頭要素のポインタと解釈される
    printf("after function13 %d\n", intArray[2]);

    // 構造体

    printf("----------- struct\n");

    struct Person person = {"Yamaha"};
    function4(person); // 値渡しのためオブジェクトがコピーされて渡る
    printf("after function4 %s\n", person.name);

    struct Person person2 = {"Yamaha"};
    function14(&person2);
    printf("after function14 %s\n", person2.name);

    return 0;
}