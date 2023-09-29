#include <stdio.h>

int main()
{
    // Declarando as variáveis, l = linha da matriz e c = coluna;
    int l = 3, c = 5;
    int matriz[l][c];
    int qtd_elementos = 0;

    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20) {
                qtd_elementos++;
            }
        }
    }

    printf("%d \n", qtd_elementos);

    return 0;
}

