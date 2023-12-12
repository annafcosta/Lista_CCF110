#include <stdio.h>

// Faça um algoritmo para ler valores reais e armazenar em uma matriz 5x5 e
//depois salvar em outra matriz, também 5x5, o resultado do cubo dos
//valores originais, nas mesmas posições.

int main()
{
    // Declarando as variáveis, l = linha da matriz e c = coluna;
    int l = 5, c = 5;
    double matriz[l][c], matriz_2[l][c];

    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            matriz_2[i][j] = matriz[i][j] * matriz[i][j] * matriz[i][j];
        }
    }

    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            printf("%.2lf ", matriz_2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
