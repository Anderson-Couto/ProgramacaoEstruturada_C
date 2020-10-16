#include <stdbool.h>
#include <math.h>

void inicia_vetor(int n, bool *v)
{
    int i = 0;
    for (i; i < n; i++) {
        
        if (i == 0 || i == 1) {
            v[i] = false;
        }
        else {
            v[i] = true;
        };
    };
};

void preenche_vetor(int n, bool *v)
{
    int L = floor(sqrt(n));

    int i = 2;
	for(i; i <= L; i++) {
	 	if (v[i] == true) {
	 		for(int j = i*2; j <= n; j += i) {
	 			v[j] = false;
	 		};
	 	}
	 	else {
	 		continue;
	 	};
	 };
};

bool verifica_primo(int n, bool *v)
{
    
}