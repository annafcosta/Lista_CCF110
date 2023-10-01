#include <stdio.h>

int main()
{
    int funcionarias = 5, servicos = 3;
    int matriz[funcionarias][servicos];
    int i, j;

    for (i = 0; i < funcionarias; i++)
    {
        for (j = 0; j < servicos; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    double valor_servicos[] = {10.0, 15.0, 30.0};

    for (i = 0; i < funcionarias; i++)
    {
        double valor_recebido = 0.0;

        for (j = 0; j < servicos; j++)
        {
            valor_recebido += (matriz[i][j] * valor_servicos[j]);
        }

        valor_recebido *= 0.5;

        printf("%d: %.2lf\n", i + 1, valor_recebido);
    }

    return 0;
}
