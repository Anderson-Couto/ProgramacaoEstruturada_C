//#include "duplica_impares.h"

void duplica_impares(int vetor[], int qtd) {
    int vetor2[qtd];
    int c=0;
    
    for(int i=0; i<qtd; i++)
    {
        vetor2[i] = -1;
    };
    
    for(int j=0; j < qtd; j++)
    {
        if(vetor[j] > 0)
        {
            vetor2[c] = vetor[j];
            c++;
            
            if(vetor[j]%2 != 0)
            {
                vetor2[c] = vetor[j];
                c++;
            };
        };
    };
    
    for (int z=0; z<qtd; z++)
    {
        vetor[z] = vetor2[z];
    };
    
};