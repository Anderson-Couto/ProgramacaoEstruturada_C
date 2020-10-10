#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int matriz[9][9];

    void inicialzaSudoku(int matriz[9][9]);
    inicialzaSudoku(matriz);
    
    
}

void atribuirValores(int matriz[9][9])
  {
    for(int i=0;i<9;i=i+1)
    {
        for (int j=0;j<9;j=j+1)
        {           
            scanf("%d", &matriz[i][j]);
        }
    }
}

int percorreLinhas(int matriz[9][9])
{
    int i=0;
    int j=0;
    int k=0;
    int verificador=1;

    while(i<9 && verificador==1)
    {
        while(j<9 && verificador==1)
        {
            while(k<9 && verificador==1)
            {
                if((matriz[i][j]!=0) && (j != k) && (matriz[i][j] == matriz[i][k]))
                {
                    verificador=0;
                }
                k++;
            }
            j++;
        }
        i++;
    }

    return verificador;
}

int percorreColunas(int matriz[9][9])
{
    int verificador=1;

    for(int j=0;j<9 && verificador==1;j++)
    {
        for(int i=0;i<9 && verificador==1;i++)
        {
            for(int k=0;k<9 && verificador==1;k++)
            {
                if((matriz[i][j]!=0) && (i != k) && (matriz[i][j] == matriz[k][j]) )
                {
                    verificador=0;
                }
            }
        }
    }
    
    return verificador;
}

int valoresRepetidosQuad(int quadrante[3][3])
{
    // Método auxiliar da função percorreQuadrante()
    int repetidos=0;

    for(int num_verificador=0; num_verificador<=9; num_verificador++)
    {   
        repetidos=0;

        for(int i = 0; i < 3; i++)
        {	
            for(int j = 0; j < 3; j++)
            {
                if(quadrante[i][j] == num_verificador && quadrante[i][j] != 0)
                {
                    repetidos++;
                }
            }

            if(repetidos > 1)
            {
                return 0;
            }
        }
    }
    return 1;
}

int percorreQuadrante(int matriz[9][9])
{
    int quadrante [3][3];
    
    for(int i = 0; i < 9; i += 3)
    {
        for(int j = 0; j < 9; j += 3)
        {
            for(int x = 0; x < 3;x++)
            {
                for(int y = 0; y < 3; y++)
                {
                    quadrante[x][y] = matriz[x+i][y+j];
                }
            }
            if(!valoresRepetidosQuad(quadrante))
            {
                return 0;
            }
        }
    }
    return 1;
}

void retornaValidacao(int matriz[9][9])
{
    if(percorreLinhas(matriz) && percorreColunas(matriz) && percorreQuadrante(matriz))
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
}

void inicialzaSudoku(int matriz[9][9])
{
    void atribuirValores(int matriz[9][9]);
    atribuirValores(matriz);
    
    int percorreLinhas(int matriz[9][9]);
    percorreLinhas(matriz);
    
    int percorreColunas(int matriz[9][9]);
    percorreColunas(matriz);
    
    int percorreQuadrante(int matriz[9][9]);
    percorreQuadrante(matriz);
    
    void retornaValidacao(int matriz[9][9]);
    retornaValidacao(matriz);
}