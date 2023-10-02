#include <stdio.h>

int main() {
    
    float variavel_a, variavel_b;

    printf("Digite um valor para A: ");
    scanf("%f" , &variavel_a);
    
    printf("Digite um valor para B: ");
    scanf("%f" , &variavel_b);

    variavel_a = variavel_a + variavel_b;
    variavel_b = variavel_a - variavel_b;
    variavel_a = variavel_a - variavel_b;

    printf("Para os valores trocados teremos A = %.2f e B = %.2f\n", variavel_a, variavel_b);
    
    return 0;
} 
