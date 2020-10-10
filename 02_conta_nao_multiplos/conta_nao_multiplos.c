/*
Programa desenvolvido por:

-- Nome: Anderson Couto Cardoso
-- RA: 21017415
-- Data: 2020-09-27
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y, z;
    int n = 0;
    int cont = 0;

    scanf("%d %d %d", &x, &y, &z);

    //Enquanto o valor inicial for diferente de (y+1), o laço continua. X é incrementado no fim.
    // É similar à:     for (x; x<=y; x++)
    while (x != (y+1))
    {
        //Se a divisão entre x e z for diferente de 0, o valor de x é printado e o contador incrementado
        if (x%z != 0)
        {
            //printf("%d; ", x);
            cont++;
        }
        x++;
    };
    
    //Printa a quantidade de números não multiplos de z
    printf("\n%d", cont);
    return 0;    
}