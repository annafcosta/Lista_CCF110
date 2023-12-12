#include <stdio.h>

// Criar um algoritmo que possa armazenar em uma matriz as alturas de dez
//atletas de cinco delegações que participarão dos jogos de verão (cada
//delegação tem 10 atletas). Depois de preenchida a matriz, escrever a
//maior altura de cada delegação.

int main()
{
    int alturas = 10, delegacoes = 5;
    int matriz[delegacoes][alturas];
    int i, j;

    for (i = 0; i < delegacoes; i++)
    {
        for (j = 0; j < alturas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Maior altura de cada delegação:\n");

    for (i = 0; i < delegacoes; ++i)
    {
        int maior_altura = matriz[i][0];

        for (j = 1; j < alturas; ++j)
        {
            if (matriz[i][j] > maior_altura)
            {
                maior_altura = matriz[i][j];
            }
        }

        printf("%d: %d\n", i + 1, maior_altura);
    }

    return 0;
}
