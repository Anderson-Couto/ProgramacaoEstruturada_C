void ordena(int *a, int *b, int *c)
{
    int aux = 0;

    int vetor[3] = {*a, *b, *c};

    for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (vetor[i] < vetor[j])
                    {
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                    }
                }
            }

    *a = vetor[0];
    *b = vetor[1];
    *c = vetor[2];
     
}