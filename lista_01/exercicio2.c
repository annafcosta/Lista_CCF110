#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    printf("Digite mais um número: ");
    scanf("%f", &n3);

    float soma1_2 = n2 + n3;

    if (n1 > soma1_2) {
        printf("O primeiro número é maior que a soma dos demais.\n");
    }
    else {
        printf("O primeiro número não é maior que a soma dos demais.\n");
    }
    return 0;
}