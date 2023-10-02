#include <stdio.h>

int main()
{
    int N, i;
    int maior_num = 0, menor_num = 0, posicao_maior, posicao_menor;

    scanf("%d", &N);

    // Aplicando a restrição para o valor máximo de N:
    if (N <= 0 || N > 50)
    {
        return 0;
    }

    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
        if (i == 0)
        {
            maior_num = vetor[i];
            menor_num = vetor[i];
        }
        if (vetor[i] > maior_num)
        {
            maior_num = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i] < menor_num)
        {
            menor_num = vetor[i];
            posicao_menor = i;
        }
    }

    printf("Maior: %d %d\n", maior_num, posicao_maior);
    printf("Menor: %d %d\n", menor_num, posicao_menor);

    return 0;
}

