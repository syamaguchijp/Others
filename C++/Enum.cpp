#include <stdio.h>

// C++で導入された Enum Class
enum class Europe
{
    England,
    Germany,
    France,
    Italy,
};

// 従来のC言語のEnum
typedef enum 
{
	E_Asia_Japan,
	E_Asia_Korea,
	E_Asia_China,
} Asia;

int main(void) {

    printf("%d\n", Europe::Germany);
    printf("%d\n", E_Asia_China);

    return 0;
}