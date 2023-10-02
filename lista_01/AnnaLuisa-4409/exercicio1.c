#include <stdio.h>

int main()
{
    float salario_pessoa;
    float salario_min = 1421.0;
    float qtd_salario_min;

    printf("Digite o valor do seu salário\n");
    scanf("%f", &salario_pessoa);

    qtd_salario_min = salario_pessoa / salario_min;

    printf("A quantidade de salários mínimos é %.2f\n", qtd_salario_min);

    return 0;
}