#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    int primos=0;
    int verificador=0;

    //Carrega as variáveis
    scanf("%d %d", &a, &b);

    //Laço no intervalo inputado
    for (int i = a; i <= b; i++)
    {
        verificador=0;

        //Verificador de multiplos conhecidos
        if (i%2 == 0 && i!=2)
        {
            continue;
        }
        else if (i%3 == 0 && i!=3)
        {
            continue;
        }
        else if (i%5 == 0 && i!=5)
        {
            continue;
        }
        else
        {
            //Laço de divisão
            for (int j = 2; j <= i; j++)
            {
                //Verifica a quantidade de múltiplos
                if (i%j == 0)
                {
                    verificador++;                    
                }
                
            }
            //Se o valor final for 1, a quantidade de primos do laço é incrementada
            if (verificador==1)
            {
                primos++;
            }
            
            
        }
        
        
    }
    
    //Print do resultado final
    printf("\n%d\n", primos);


}