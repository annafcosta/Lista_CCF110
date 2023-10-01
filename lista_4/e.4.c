#include <stdio.h>

int main()
{
    int l = 6, c = 3;
    double matriz[l][c];
    int i, j;

    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    double maior_elemento = matriz[0][0];
    double menor_elemento = matriz[0][0];
    int posicao_maior_i, posicao_maior_j;
    int posicao_menor_i, posicao_menor_j;


    for (i = 0; i < l; ++i)
    {
        for (j = 0; j < c; j++)
        {
            if (matriz[i][j] > maior_elemento)
            {
                maior_elemento = matriz[i][j];
                posicao_maior_i = i;
                posicao_maior_j = j;
            }
            if (matriz[i][j] < menor_elemento)
            {
                menor_elemento = matriz[i][j];
                posicao_menor_i = i;
                posicao_menor_j = j;
            }
        }
    }

    printf("Maior (i, j, elemento): %d %d %.2lf\n", posicao_maior_i, posicao_maior_j, maior_elemento);
    printf("Menor (i, j, elemento): %d %d %.2lf", posicao_menor_i, posicao_menor_j, menor_elemento);

    return 0;
}
