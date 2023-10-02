#include <stdio.h>

int main()
{
    int N, i;
    int soma = 0;

    scanf("%d", &N);

    int vetor[N]; // Declarar o vetor após ler N.

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            soma = soma + vetor[i];
        }
    }

    printf("%d\n", soma);

    return 0;
}
