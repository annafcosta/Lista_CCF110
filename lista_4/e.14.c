
#include <stdio.h>

// 14. Criar um algoritmo que receba duas matrizes A (tamanho CxD) e B
//(tamanho ExF) (com valores de C, D, E e F <= 6). Esse algoritmo deve
//verificar se o produto matricial de A por B é possível (ou seja, se D = E).
//Caso seja possível, calcular o tal produto, escrevendo a matriz G
//(tamanho CxF) resultado.

int main()
{
    int C, D, E, F;

    scanf("%d %d %d %d", &C, &D, &E, &F);

    // Verificar se o produto matricial é possível

    int A[C][D], B[E][F], G[C][F];

    if (C <= 6 && D <= 6 && E <= 6 && F <= 6)
    {
        if (D != E)
        {
            printf("Impossivel");
        }
        else
        {
            for (int i = 0; i < C; i++)
            {
                for (int j = 0; j < D; j++)
                {
                    scanf("%d", &A[i][j]);
                }
            }


            for (int i = 0; i < E; i++)
            {
                for (int j = 0; j < F; j++)
                {
                    scanf("%d", &B[i][j]);
                }
            }

            // Calcular o produto matricial
            for (int i = 0; i < C; i++)
            {
                for (int j = 0; j < F; j++)
                {
                    G[i][j] = 0;

                    for (int k = 0; k < D; k++)
                    {
                        G[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            for (int i = 0; i < C; i++)
            {
                for (int j = 0; j < F; j++)
                {
                    printf("%d ", G[i][j]);
                }
                printf("\n");
            }

        }

    }

    return 0;
}

