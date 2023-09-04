#include <stdio.h>

int main()
{

    int i, num, num_qtd, maior = 0;

    printf("Digite a quantidade de números desejada: ");
    scanf("%d", &num_qtd);

    for (i = 0; i <= num_qtd; i++)
    {
        scanf("%d", &num);
        if (i == 1)
        {
            maior = num;
        } else
        {
            if (num > maior)
            {
                maior = num;
            }
        }

    }

    printf("O maior númeoro é %d\n", maior);

    return 0;
}

