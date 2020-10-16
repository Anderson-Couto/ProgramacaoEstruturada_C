//#include "multiplicacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int multiplicacao_russa(int a, int b);
int main(int argc, char *argv[])
{
    int resultado = 0;
    int a = 99;
    int b = 99;

    resultado = multiplicacao_russa(a, b);
    printf("%d", resultado);

}

int multiplicacao_russa(int a, int b) {
    
    if(a==0)
        return 0;
    if(a%2!=0)
        return b + multiplicacao_russa(a/2, b*2);
    return multiplicacao_russa(a/2, b*2);
}