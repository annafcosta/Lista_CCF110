#include <stdio.h>

int main()
{

    int N;
    float E = 0, i = 1;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    printf("Valor de E: \n");

// Cauculando o valor de E:
    while (i <= N)
    {
        E += 1 / i;

        printf("1/%.0f", i);

        // Anexar o sinal de soma para imprimir certo:
        if (i < N)
        {
            printf(" + ");
        }
        i++;
    }
    printf(" = %.2f", E);

    return 0;
}