#include <stdio.h>

// Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e
//escreva somente os elementos acima da diagonal principal.

int main()
{
    int l = 10;
    int matriz[l][l];
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < l; i++)
    {
        {
            printf("%d ", matriz[i][l - 1 - i]);
        }
    }

    return 0;
}

