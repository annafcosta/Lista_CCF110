#include <stdio.h>

int main()
{

    int N, i = 1;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("%d X %d = %d \n", i, N, (i * N));
        i++;
    }

    return 0;
}
