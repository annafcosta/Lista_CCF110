#include <stdio.h>

typedef struct {
    char titulo[30];
    char autor[15];
    int ano;
    
} Livros;

int main() {

    int N, i;
    scanf("%d", &N);

    Livros livro[N];

    for (i = 0; i < N; i++)
    {
        scanf("%s", livro[i].titulo);
        scanf("%s", livro[i].autor);
        scanf("%d", &livro[i].ano);
    }

    int termo_pesquisa[30];
    scanf("%s", termo_pesquisa);

    for (i = 0; i < N; i++)
    {
        if(strcmp(termo_pesquisa, livro[i].titulo) == 0) {
            printf("%s\n", livro[i].titulo);
            printf("%s\n", livro[i].autor);
            printf("%d\n", livro[i].ano);

        }
    }

    return 0;
}
