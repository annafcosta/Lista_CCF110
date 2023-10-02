#include <stdio.h>

int main()
{
    int N = 220, M = 150;
    int i, C[N], P[M], qtd_matricula = 0, matricula[M], j, duplicado = 0;

    for (i = 0; i < M; i++)
    {
        scanf("%d", &P[i]);
    }

    for (j = 0; j < M; j++)
    {
        scanf("%d", &C[j]);
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (C[j] == P[i] && P[i] != 0)
            {
                for (int k = 0; k < qtd_matricula; k++)
                {
                    if (matricula[k] == C[j])
                    {
                        duplicado = 1;
                        break;
                    }
                }
                if (!duplicado)
                {
                    matricula[qtd_matricula++] = C[j];
                    printf("%d ", C[j]);
                }
                duplicado = 0;
            }
        }
    }

    return 0;
}