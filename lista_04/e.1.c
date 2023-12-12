#include "stdio.h"

int main()
{
    int produto = 3, armazem = 3;
    int tabela[armazem][produto];
    float valores[] = {260.00, 420.00, 330.00};

    // Ler os valores para preencher a tabela com a quantidade de cada produto em cada armazém:
    printf("Digite a quantidade de produtos existentes em cada armazém: \n");

    for (int i = 0; i < armazem; i++)
    {
        for (int j = 0; j < produto; j++)
        {
            scanf("%d", &tabela[i][j]);
        }
    }

    // Determinar quantos produtos estão armazenados em cada armazém:
    for (int i = 0; i < armazem; i++)
    {
        int soma = 0;

        for (int j = 0; j < produto; j++)
        {
            soma += tabela[i][j];
        }
        printf("O armazém %d tem %d produtos.\n", (i + 1), soma);
    }

    // Apresente qual armazém apresenta a maior quantidade do produto 2:
    int maior_qtd_produto2 = tabela[0][1];
    int armazem_maior_p2 = 0;

    // Apresente o valor total de estoque em cada armazém:
    for (int i = 0; i < armazem; i++)
    {
        float total = 0.0;
        for (int j = 0; j < produto; j++)
        {
            total = total + (tabela[i][j] * valores[j]);
        }
        printf("\n");
    }

    // Imprimir os valores:
    printf("\nQuantidades armazenadas:\n");

    for (int i = 0; i < armazem; i++)
    {
        for (int j = 0; j < produto; j++)
        {
            printf("%d ", tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
