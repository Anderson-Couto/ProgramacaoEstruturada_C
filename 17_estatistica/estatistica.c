//#include "vetor.h"

double raiz (double x) {

	float aux, raiz;

	raiz = x/2;
	aux = 0;

	while(raiz != aux) {

		aux = raiz;
		raiz = (x/aux + raiz) / 2;
	}
	return raiz;
}


void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio) {
    
    *min = vetor[0];
    *max = vetor[0];
    *soma = vetor[0];

    for(int i = 1; i < n; i++) {
    	if (vetor[i] < *min) {
    		*min = vetor[i];
    	}
    	if (vetor[i] > *max) {
    		*max = vetor[i];
    	}
    	*soma += vetor[i];
    }

    *media = *soma/((double) n);

    double temp_soma = 0;
	
	for(int i = 0; i < n; i++) {
    	temp_soma += (vetor[i] - *media) * (vetor[i] - *media);
    }
    temp_soma = temp_soma/n;

    *desvio = raiz(temp_soma);

}