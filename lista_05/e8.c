#include <stdio.h>

typedef struct {
    int codigo;
    char descricao[50];
    int estoque_minimo;
    int estoque_atual;
    double preco;
} Informacoes;

int main() {
    int N;
    scanf("%d", &N);

    Informacoes dados[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &dados[i].codigo);
        scanf("%s", dados[i].descricao);
        scanf("%d", &dados[i].estoque_atual);
        scanf("%d", &dados[i].estoque_minimo);
        scanf("%lf", &dados[i].preco);
    }

    for (int i = 0; i < N; i++) {
        if (dados[i].estoque_atual > dados[i].estoque_minimo) {
            printf("%d\n", dados[i].codigo);
            printf("%s\n", dados[i].descricao);
            printf("%d\n", dados[i].estoque_atual);
            printf("%d\n", dados[i].estoque_minimo);
            printf("%.2lf\n", dados[i].preco);
        }
    }
    return 0;
}