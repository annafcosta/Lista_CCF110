#include <stdio.h>

int main()
{

    int N;
    float E = 0, i;

    printf("Digite um valor inteiro para N: ");
    scanf("%d", &N);

    printf("Valor de E: \n");

    for (i = 1; i <= N; i++)
    {
        E += 1 / i;

        printf("1/%.0f", i);

        //Anexando a o sinal de soma pra imprimir certo:
        if (i < N)
        {
            printf(" + ");
        }
    }

    printf(" = %.2f", E);

    printf("\n");
    return 0;
}