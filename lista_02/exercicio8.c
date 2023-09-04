#include <stdio.h>

int main()
{
    float prestacao, salario_bruto;

    printf("Digite o valor do seu salário bruto: ");
    scanf("%f", &salario_bruto);

    while (salario_bruto >= 0)
    {
        printf("Digite o valor da prestação: ");
        scanf("%f", &prestacao);

        if (prestacao <= salario_bruto * 0.3)
        {
            printf("O empréstimo pode ser concedido.\n");
        } else
        {
            printf("O empréstimo não pode ser concedido.\n");
        }
    }

    return 0;
}


