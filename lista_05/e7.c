#include <stdio.h>

typedef struct {
    char nome[15];
    int codigo;
    double preco;
    int quantidade;
} Produtos;

typedef struct {
    int codigo;
    int quantidade;
} Pedido;

int main() {

    Produtos produto[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%s", produto[i].nome);
        scanf("%d", &produto[i].codigo);
        scanf("%lf", &produto[i].preco);
        scanf("%d", &produto[i].quantidade);
    }

    i = 0;

    Pedido pedidos;

    while (1)
    {
        scanf("%d", &pedidos.codigo);

        if (pedidos.codigo == 0) {
            break; 
        }

        scanf("%d", &pedidos.quantidade);


        for (i = 0; i < 5; i++) {
            if (produto[i].codigo == pedidos.codigo) {
                if (produto[i].quantidade >= pedidos.quantidade) {
                    produto[i].quantidade -= pedidos.quantidade;
                    printf("compra efetuada\n");
                } else {
                    printf("quantidade insuficiente\n");
                }
                break; 
            }
        }

        if (i == 5) {
            printf("nao encontrado\n");
        }
        
    }
    
    return 0;
}
