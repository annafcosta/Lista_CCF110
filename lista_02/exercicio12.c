#include <stdio.h>

int main()
{

    int N, i;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {

        printf("%d X %d = %d \n", i, N, (i * N));
    }

    return 0;
}
