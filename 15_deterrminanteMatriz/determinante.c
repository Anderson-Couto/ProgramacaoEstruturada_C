//#include "determinante.h"
#include <stdio.h>

void atribuiValores(int n, float matriz[n][n])
{
    for(int i=0;i<n;i++)
	{
        for (int j=0;j<n;j++)
        {           
            scanf("%f", &matriz[i][j]);
        }
    }
}

int potenciacao (int num, int exp) {

	if (exp == 0)
	{
		return 1;
	}
	else {
		return num*potenciacao(num, exp-1);
	}
}

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (j<c)
			{
				m_saida[i][j] = m_entrada[i+1][j];
			}
			else
			{
				m_saida[i][j] = m_entrada[i+1][j+1];
			}
		}
	}
}

float calcula_determinante(int n, float m_entrada[n][n]) {

	if(n == 1) {
		return m_entrada[0][0];
	}
	else{
		float soma=0;

		for (int j = 0; j < n; j++) {
			float m_saida[n][n]; 
			remove_primeira_linha_e_coluna_c(n, m_entrada, m_saida, j);
			soma += m_entrada[0][j]*potenciacao(-1, (j+2))*calcula_determinante(n-1, m_saida);
		}

		return soma;
	}
}

void iniciaApp(int tam)
{
	float matriz[tam][tam];
	atribuiValores(tam, matriz);
	printf("%.2f\n", calcula_determinante(tam, matriz));
}

int main(int argc, char *argv[]) {
    
	int num;
	scanf("%d", &num);
	
	iniciaApp(num);
	
    return 0;
}