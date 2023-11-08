#include <stdio.h>

typedef struct {
    int tipo;
    char endereco[50];
    char bairro[50];
    double valor;
    int situacao;
} Imoveis;

typedef struct {
    int situacao;
} Escolha;

int main() {

    int qtd_imoveis;
    scanf("%d", &qtd_imoveis);

    Imoveis imovel[qtd_imoveis];
    int i;

    for (i = 0; i < qtd_imoveis; i++)
    {
        scanf("%d", &imovel[i].tipo);
        scanf("%s", imovel[i].endereco);
        scanf("%s", imovel[i].bairro);
        scanf("%lf", &imovel[i].valor);
        scanf("%d", &imovel[i].situacao);   
    }

    i = 0;

    Escolha usuario_escolha;

    scanf("%d", &usuario_escolha.situacao);

    for (i = 0; i < qtd_imoveis; i++)
    {
        if (imovel[i].situacao == usuario_escolha.situacao)
        {
            printf("%d\n", imovel[i].tipo);
            printf("%s\n", imovel[i].endereco);
            printf("%s\n", imovel[i].bairro);
            printf("%.2lf\n", imovel[i].valor);
            printf("%d\n", imovel[i].situacao); 
        }
          
    }

    return 0;
}
