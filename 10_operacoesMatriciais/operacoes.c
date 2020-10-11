//#include "operacoes.h"

#define MAX_LINHAS 50;
#define MAX_COLUNAS 50;

//para constantes cria o hábito de usar o define, ele é imutável no código, diferente de declarar int x. Ele já ta formatado na boa prática de constantes haha sempre em caps lock

void soma(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = a[i][j] + b[i][j];
        }
        
    }
}

void transposta(int m[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[j][i] = m[i][j];
        }
    }
}

void concatena_horizontal(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = a[i][j];
            resp[i][j+n_colunas] = b[i][j];
        }
    }
}

void concatena_vertical(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
     for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            resp[i][j] = a[i][j];
            resp[i+n_linhas][j] = b[i][j];
        }
    }
}

void multiplicacao(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    int soma=0;
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 0; j < n_colunas; j++)
        {
            soma = 0;
            for(int k=0; k<n_linhas; k++) soma+=a[i][k]*b[k][j];
            resp[i][j] = soma;
        }
        
    }
}
