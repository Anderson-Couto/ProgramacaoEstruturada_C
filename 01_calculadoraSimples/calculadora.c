/*
Programa desenvolvido por:

-- Nome: Anderson Couto Cardoso
-- RA: 21017415
-- Data: 2020-09-27
*/


#include <stdio.h>

int main(int argc, char *argv[])
{   
    float a, b;
    char o;
    float n;
    scanf("%f %c %f", &a, &o, &b);

    //Verificação para Soma
    if (o == '+')
    {
        n = a + b;
        printf("%.2f", n);
    }
    //Verificação para Subtração
    else if (o == '-')
    {
        n = a - b;
        printf("%.2f", n);
    }
    //Verificação para Multiplicação
    else if (o == '*')
    {
        n = a * b;
        printf("%.2f", n);
    }
    //Verificação para Divisão
    else if (o == '/')
    {
        //Verificação para Divisões possíveis
        if (b != 0)
        {
            n = a / b;
            printf("%.2f", n);
        }
        //Verificação para Divisões desconhecidas
        else{
            printf("NaN");
        }
        
    };
    
    return 0;
}