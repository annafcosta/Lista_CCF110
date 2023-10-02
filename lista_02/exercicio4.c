#include <stdio.h>

int main() {
    int N = 200;
    int i, num, num_pares = 0, num_impares = 0;

    printf("Digite 200 números:\n");

    for (i = 1; i <= N; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            num_pares++;
        } else {
            num_impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", num_pares);
    printf("Quantidade de números ímpares: %d\n", num_impares);

    return 0;
}
