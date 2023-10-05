#include <stdio.h>

// Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e
//escreva todos os elementos, exceto os elementos da diagonal principal.

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
        for (j = 0; j < l; j++)
        {
            if (j > i)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
