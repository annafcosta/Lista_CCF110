#include <stdio.h>

int main() {
    
    float salario_bruto, prestacao, valor_prestacao_max;

    printf("Digite o valor do seu salário bruto: ");
    scanf("%f", &salario_bruto);

    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    valor_prestacao_max = salario_bruto*0.30;

    if (prestacao < valor_prestacao_max) 
    {
        printf("O empréstimo pode ser concedido.\n");
    }

    else 
    {
        printf("O empréstimo não pode ser concedido.\n");
    }
    
    return 0;
} 