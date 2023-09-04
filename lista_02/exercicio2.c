#include <stdio.h>

int main()
{
    int N, i, numero, soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Digite o valor dos números inteiros: ");
        scanf("%d", &numero);
        soma += numero;
    }

    printf("A soma dos números fornecidos de 1 a N é %d\n", soma);

    return 0;
}