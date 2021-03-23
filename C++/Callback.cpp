#include <stdio.h>
#include <functional>

// コールバック関数
void callback(int num)
{
    printf( "Hello %d\n", num);
}

// (方法1) 関数ポインタを渡す
void invoke_callback(int num, void (*callback)(int))
{
    return callback(num);
}

// (方法2) std::functionを利用
using CallbackMethod = std::function<void(int)>;
void invoke_callback_2(int num, CallbackMethod method)
{
    return method(num);
}

// 実行サンプル
int main(void) {

    // (方法1) 関数ポインタを渡す
    // invoke_callback 関数の引数に渡された関数ポインタを呼び出す
    invoke_callback(1, callback);

    // (方法2) std::functionを利用
    invoke_callback_2(2, callback);

    return 0;
}