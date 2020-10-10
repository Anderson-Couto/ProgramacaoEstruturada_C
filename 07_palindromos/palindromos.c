//#include "maior_palindromo.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void converte_numero_para_vetor_de_digitos(int n, int v[]) {
    int k = floor(log10(abs(n))) + 1;

	v[k] = -1;

    while(k > 0) {
		
		v[k-1] = n%10;
		n = n/10;
		k--;
	}
}

int eh_palindromo(int v[]) {
    int elementos = 0;
    int i = 0;
	int qtd_valida = 0;
	int pares_iguais = 0;
	int palindromo = 0;

    for (i = 0; v[i] != -1; i++) {
    	elementos++;
    }

	int vetor_aux[elementos];

	for (i = 0; i<elementos; i++) {
		vetor_aux[i] = v[elementos-i-1];
	}

	for (i = 0; i < elementos; i++) {
		if(v[i] == vetor_aux[i]) {
			pares_iguais++;
		}
	}

	if(pares_iguais == elementos) {
		palindromo = 1;
	}

	return palindromo;
}

int maior_palindromo(int m, int fatores[2]) {
    int a = m;
	int b = m;
    int palindromo_campeao = 0;

	
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            int mult = i*j;

            int tam = floor(log10(abs(mult))) + 1;
	        int vetor_aux[tam];

            converte_numero_para_vetor_de_digitos(mult,vetor_aux);

            int palindromo = 0;
		    palindromo = eh_palindromo(vetor_aux);

            if (palindromo == 1 && mult > palindromo_campeao)
            {
                palindromo_campeao = mult;
                fatores[0] = i;
                fatores[1] = j;
            }
        } 
    }
    
    return fatores[0]*fatores[1];
}