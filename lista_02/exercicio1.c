#include <stdio.h>

int main()
{
    int num, i, cubo;

    printf("Digite o valor de 400 números: ");

    for (i = 1; i <= 400; i++)
    {
        scanf("%d", &num);
        cubo = num * num * num;
    }

    printf("O cubo dos valores fornecidos é %d\n", cubo);

    return 0;
}


