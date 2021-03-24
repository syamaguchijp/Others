#include <stdio.h>

enum Europa {
	Europa_England,
	Europa_France,
	Europa_Germany,
};

typedef enum 
{
	E_Asia_Japan,
	E_Asia_Korea,
	E_Asia_China,
} Asia;

int main(void) {

    printf("%d\n", Europa_England);
    printf("%d\n", E_Asia_China);

    return 0;
}