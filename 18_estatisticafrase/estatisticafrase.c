//#include "frase.h"

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


int tamanho(char palavra[]){

    int i = 0;

    while (palavra[i] != '\0') {
        i++;
    }

    return i;
}

int endString(char frase[], int i) {
	while (((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) == 1 && frase[i] != '\0')  {
		i++;
	}
	return i;
}

int startString(char frase[], int i) {
	while (((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) == 0 && frase[i] != '\0')  {
		i++;
	}
	return i;
}

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {

	int i = 0;
	*min = tamanho(frase);
    *max = 0;
    *soma = 0;
    int inicio = 0;
    int fim = 0;
    int palavra = 0;
    int tamanho = 0;
    double temp_soma = 0;

 	for (i = 0; frase[i] != '\0'; i++) {
 		if(frase[i] >= 'A' && frase[i] <= 'z') {
 			fim = endString(frase, i);
 			tamanho = fim - inicio;
 			if(tamanho < *min) {
 				*min = tamanho;
 			}
 			if(tamanho > *max) {
 				*max = tamanho;
 			}
 			palavra++;
 			*soma += tamanho;
 			i = endString(frase, i);
 			inicio = startString(frase, i);
 		}
	}

    *media = *soma/((double) palavra);

    inicio = 0;

    for (i = 0; frase[i] != '\0'; i++) {
 		if(frase[i] >= 'A' && frase[i] <= 'z') {
 			fim = endString(frase, i);
 			tamanho = fim - inicio;
 			temp_soma += (tamanho - *media)*(tamanho - *media);
 			inicio = startString(frase, endString(frase,i));
 			i = endString(frase, i);
 		}
	}

    temp_soma = temp_soma/palavra;
	*desvio = raiz(temp_soma);
}