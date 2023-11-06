#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    char nome[100];
    char endereco[50];
    int numero;
} Pessoa;

int main() {

    struct Pessoa pessoas[5];
    int num_pessoas = 5;

    for (int i = 0; i < num_pessoas; i++)
    {
        scanf("%s", pessoas[i].nome);
        scanf("%s", pessoas[i].endereco);
        scanf("%d", &pessoas[i].numero);
    }

    for (int i = 0; i < num_pessoas; i++)
    {
        printf("\n%s ", pessoas[i].nome);
        printf("\n%s ", pessoas[i].endereco);
        printf("\n%d\n", pessoas[i].numero);
    }
    
    return 0;
}
