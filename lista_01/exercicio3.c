#include <stdio.h>

int main() {
    float capital, juros, total;

    printf("Digite o valor do capital em reais: ");
    scanf("%f" , &capital);
    printf("Digite o valor dos juros: ");
    scanf("%f" , &juros);

    total = capital + (capital*(juros/100));

    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));
    total = total + (total*(juros/100));

    printf("O valor do montante é: %0.2f\n reais", total);
    return 0;
}
