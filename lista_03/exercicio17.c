#include <stdio.h>

int main()
{
    int N = 10, alturas[N], maior, media = 0, soma = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &alturas[i]);

    }
    for (int i = 0; i < N; i++)
    {
        soma += alturas[i];
        media = soma / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        maior = alturas[i];

        if (maior > media)
        {
            printf("%d ", maior);
        }
    }

    return 0;
}

