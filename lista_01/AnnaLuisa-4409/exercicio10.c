#include <stdio.h>

int main() {
    float salario, reajuste_s;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);

    if (salario < 500) 
    {
        reajuste_s = salario + (salario*0.15);
        printf("O valor do seu salário ajustado será de: R$%.2f\n", reajuste_s);
    }

    else 
    {
        printf("Você não tem direito ao aumento.");
    }
    return 0;
} 