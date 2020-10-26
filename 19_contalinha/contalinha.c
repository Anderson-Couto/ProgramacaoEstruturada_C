//#include "conta_linhas_frase.h"

void conta_linhas(char frase[], int largura_linha, int* qtd_linhas) {
    int num_palavras = conta_palavras(frase);
}

int conta_palavras(char frase[])
{
    int cont = 0;

    for (int i = 0; i < 1000000000000; i++)
    {
        if (frase[i] == ' ' && frase[i+1] != ' ')
        {
            cont++;
        }
        else if (frase[i] == '\0')
        {
            break;
        }
        
        ;
    };

    return (cont+1);
}

void atribuiVetor(char frase[])
{
    int num_palavras = conta_palavras(frase);
    char matriz_strings[num_palavras][50];
    
   int index = 0;
   int i = 0;
   int j = 0;
    while (frase[index] != '\0')
    {
        if (frase[index] != ' ')
        {
            matriz_strings[i][j] = frase[index];
            j++;
            index++;
        }
        else if (frase[index] == ' ')
        {
            index++;
            j=0;
            i++;
        }
    }
    

	printf ("\n\n\nAs strings que voce digitou foram:\n\n");

	for (int count=0;count<num_palavras;count++){
        printf ("%s\n", matriz_strings[count]);
    } 
}

int main(int argc, char *argv[]) {
    
	char frase[200] = "teste1 teste2 teste3 teste4 teste5";

    //printf("%d", conta_palavras(frase));

    atribuiVetor(frase);
    
                
    return 0;
	
}