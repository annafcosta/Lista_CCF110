#include <stdio.h>

// Criar um algoritmo que leia e armazene os elementos de uma matriz
//inteira 10x10 e escreva as matrizes resultantes das seguintes trocas:
// A segunda linha pela oitava linha;
// A quarta coluna pela décima coluna;
// A diagonal principal pela diagonal secundária.

int main()
{
    int l = 10;
    int matriz[l][l];
    int i, j, aux, aux_2, aux_3;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Trocando a segunda linha pela oitava;
    for (j = 0; j < l; j++)
    {
        aux = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = aux;
    }

    // Trocando a quarta coluna pela décima;
    for (i = 0; i < l; i++)
    {
        {
            aux_2 = matriz[i][3];
            matriz[i][3] = matriz[i][9];
            matriz[i][9] = aux_2;
        }
    }

    // Trocando a diagonal principal pela diagonal secundária.
    for (i = 0; i < l; i++)
    {
        aux_3 = matriz[i][i];
        matriz[i][i] = matriz[i][l - 1 - i];
        matriz[i][l - 1 - i] = aux_3;
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
