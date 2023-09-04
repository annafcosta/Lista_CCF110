#include <stdio.h>

int main()
{
    int i, qtd_valor, valor;
    float media, soma = 0;

    printf("Digite a quantidade de valores inteiros: ");
    scanf("%d", &qtd_valor);

    for (i = 1; i <= qtd_valor; i++)
    {
        printf("Digite um numero para o valor %d: ", i);
        scanf("%d", &valor);
        soma += valor;
    }

    media = soma / qtd_valor;

    printf("A media deu: %.2f\n", media);

    return 0;
}
