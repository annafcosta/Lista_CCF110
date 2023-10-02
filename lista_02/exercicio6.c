#include <stdio.h>

int main()
{

    int i, num, fat = 1;

    // Fazer a leitura dos números não negativos:

    do
    {
        printf("Digite um número para calcular seu fatorial: ");
        scanf("%d", &num);
    } while (num < 0);

    for (i = 1; i <= num; i++)
    {
        fat *= i;
    }
    printf("%d! = %d\n", num, fat);

    return 0;
}