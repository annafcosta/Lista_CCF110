#include <stdio.h>

int main()
{
    int N = 10;
    int i, soma = 0;
    int notas[N];
    float media;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    media = (float) soma / N;

    printf("Media: %.6f\n", media);

    return 0;
}