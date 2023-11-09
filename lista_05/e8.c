#include <stdio.h>

typedef struct {
    int tipo;
    char endereco[30];
    char bairro[30];
    double valor;
    int situacao;
} Imoveis;

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

    int usuario_escolha;

    scanf("%d", &usuario_escolha);

    for (i = 0; i < qtd_imoveis; i++)
    {
        if (imovel[i].situacao == usuario_escolha)
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
