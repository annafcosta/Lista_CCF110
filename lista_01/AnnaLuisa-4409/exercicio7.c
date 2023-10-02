#include <stdio.h>

int main() {
    float numero_a, numero_b;

    printf("Digite o valor de um número: ");
    scanf("%f" , &numero_a);

    printf("Digite o valor de outro número: ");
    scanf("%f" , &numero_b);

    if (numero_b == 0) 
    {
        printf("Os números fornecidos não podem ser divísveis um pelo outro (não é possível dividir por ZERO!).\n");
    }

    else 
    {
        printf("Os valores forneceidos podem ser divisíveis um pelo outro.\n");
    }
    
    return 0;
} 
