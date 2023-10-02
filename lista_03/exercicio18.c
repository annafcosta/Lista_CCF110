#include <stdio.h>

int main() {
    int N = 100, i;
    int qtd_mercadoria[N];
    double preco[N], faturamento = 0;

    for (i = 0; i < N; ++i) {
        scanf("%d", &qtd_mercadoria[i]);
    }

    for (i = 0; i < N; ++i) {
        scanf("%lf", &preco[i]);
    }

    for (i = 0; i < N; ++i) {
        faturamento += qtd_mercadoria[i] * preco[i];
    }

    printf("%.2lf", faturamento);

    return 0;
}



