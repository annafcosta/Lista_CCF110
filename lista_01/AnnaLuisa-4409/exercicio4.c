#include <stdio.h>

int main() {
    char pao;
    int qtd_pao;
    float valor_total;

    printf("Qual pão gostaria? Digite S para pão de sal e D para pão de doce: ");
    scanf("%c", &pao);

    printf("Digite a quantidade de pães desejada: ");
    scanf("%d", &qtd_pao);

    if (pao == 'S') 
    {
        valor_total = 0.10*(qtd_pao);
        printf("O valor do total dos seus pães de sal será de %.2f\n", valor_total);
    } 

    else if (pao == 'D') 
    {
        valor_total = 0.15*(qtd_pao);
        printf("O valor do total dos seus pães de doce será de R$ %.2f.\n", valor_total);
    }

    else 
    {
        printf("Escolha de pão inválida.\n");
        return 1;
    }
    return 0;
}
