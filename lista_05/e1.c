#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    char endereco[50];
    int numero;
} Pessoa;

int main() {

    Pessoa pessoas[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%s", pessoas[i].nome);
        scanf("%s", pessoas[i].endereco);
        scanf("%d", &pessoas[i].numero);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pessoas[i].nome);
        printf("%s\n", pessoas[i].endereco);
        printf("%d\n\n", pessoas[i].numero);
    }

    return 0;
}
