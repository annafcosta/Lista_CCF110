#include <stdio.h>

// Faça um programa que preencha uma matriz 5 x 5, calcule e mostre a
//média dos elementos da diagonal principal.

int main()
{
    int l = 5;
    int matriz[l][l];
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    float media;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }

    media = soma / (float)l;

    printf("Media: %.2f", media);

    return 0;
}
