#include <stdio.h>

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
