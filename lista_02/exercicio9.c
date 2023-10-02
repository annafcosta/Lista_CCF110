#include <stdio.h>

int main()
{
// Definindo a variável s como um somatório dos números congruentes até 10.
    int s = 0, i, j, m;

    do
    {
        printf("Digite valor de j e m: ");
        scanf("%d, %d", &j, &m);

    } while (j < m || j == 0 || m == 0);

    printf("Números congruentes: ");
    for (i = 1; s < 10; i++)
    {
        if (i >= m)
        {
            // Igualando para verificar a congruência:
            if (i % m == j % m)
            {
                printf("%d ", i);
                s++;
            }
        }
    }

    return 0;
}
