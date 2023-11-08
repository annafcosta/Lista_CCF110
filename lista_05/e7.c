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
        scanf("%d", produto[i].codigo);
        scanf("%lf", &produto[i].preco);
        scanf("%d", produto[i].quantidade);
    }

    i = 0;
    int qtd_produto = 0;

    Pedido pedidos;

    while (produto[i].codigo != 0)
    {
        scanf("%d", pedidos.codigo);
        scanf("%d", pedidos.quantidade);

        if (produto[i].quantidade > qtd_produto)
        {
            
        }
        
    }
    

   
    return 0;
}
