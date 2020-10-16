//#include "remover_duplicados.h"

void remover_duplicados(int vetor[], int qtd) {
    
    int vetor2[qtd];
    int c=0;
    int k= qtd-1;
  
    for(int i=0; i < qtd; i++)
    {
        vetor2[i] = -1;
    };
    
    for(int j=0; j<qtd; j++)
    {
        if(j == 0)
        {
            vetor2[c] = vetor[j];
            c++;
        }
        else
        {
            if(vetor[j] != vetor[j-1])
            {
                vetor2[c] = vetor[j];
                c++;
            }
            else
            {
                vetor2[k] = -1;
                k--;
            }
        }
    };
    
    for(int z=0; z<qtd; z++)
    {
        vetor[z] = vetor2[z];
    };
};