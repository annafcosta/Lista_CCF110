#include <stdio.h>

int main()
{
    int num, i, soma = 0;

    printf("Digite 100 números inteiros:\n");

    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            soma += num;
        }
    }

    printf("A soma dos números pares é: %d\n", soma);

    return 0;
}
