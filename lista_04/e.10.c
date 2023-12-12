#include <stdio.h>

// A dona do salão Sempre Bela tem uma tabela em que registra quantas
//vezes cada uma das suas cinco funcionárias realizaram cada um dos
//serviços: corte, depilação e podologia. Sabendo-se que cada funcionária
//ganha 50% do que faturou, criar um algoritmo que possa calcular e
//escrever quanto cada uma vai receber; os valores de cada serviço são,
//respectivamente R$10,00; R$15,00 e R$30,00. Dica: crie uma matriz
//5x3, sendo uma linha para cada funcionária.

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
