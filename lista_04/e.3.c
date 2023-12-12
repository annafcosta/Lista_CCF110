#include <stdio.h>

// Faça um algoritmo para ler valores reais e armazenar em uma matriz 5x5 e
//depois imprima os elementos da diagonal principal.

int main()
{
    int l = 5;
    double matriz[l][l];
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (i == j)
            {
                printf("%.2lf ", matriz[i][j]);
            }
        }
    }

    return 0;
}

