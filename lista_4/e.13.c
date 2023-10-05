#include <stdio.h>

// 13. Criar um algoritmo que leia uma matriz M de tamanho NxN e verifique e
//mostre na saída se tal matriz é ou não simétrica (Mt = M, ou a matriz
//original é igual à sua transposta).

int main()
{
    int N;

    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &matriz[i][j]);

    // Verificar se a matriz é simétrica
    int simetrica = 1;

    for (int i = 0; i < N && simetrica; i++)
        for (int j = 0; j < N; j++)
            if (matriz[j][i] != matriz[i][j])
                simetrica = 0;


    if (simetrica)
        printf("simetrica\n");
    else
        printf("nao simetrica\n");

    return 0;
}
