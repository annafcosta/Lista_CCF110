#include <stdio.h>

int main()
{
    int N = 6, i;
    int qtd_positivo = 0, qtd_negativo = 0;
    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0)
        {
            qtd_positivo++;
        }

        else if (vetor[i] < 0)
        {
            qtd_negativo++;
        }
    }

    printf("Positivos: %d\nNegativos: %d\n", qtd_positivo, qtd_negativo);
    return 0;
}

