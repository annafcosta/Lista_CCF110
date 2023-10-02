#include <stdio.h>

int main()
{
    int N = 15, i;
    int vetor[N];
    int maior_num = 0, menor_num = 0, posicao_maior, posicao_menor;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
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
    printf("Maior %d %d", menor_num, posicao_menor);

    return 0;
}
