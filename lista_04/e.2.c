void cadastrar_venda(Cadastro_produto *produtos, int num_produtos,
                     Cadastro_venda *vendas, int maxvendas, int *num_vendas)
{
    int continuar = 1;

    while (continuar)
    {
        int codigo_venda;
        int quantidade_vendida;

        printf("\nInforme o código do produto vendido (ou 0 para encerrar): ");
        scanf("%d", &codigo_venda);

        if (codigo_venda == 0)
        {
            continuar = 0;
        } else
        {
            int produto_encontrado = verificar_codigo_produto(codigo_venda, produtos, num_produtos);

            if (produto_encontrado != -1)
            {
                printf("Informe a quantidade vendida: ");
                scanf("%d", &quantidade_vendida);

                if (quantidade_vendida < 0)
                {
                    printf("\033[31mQuantidade vendida não pode ser negativa. Tente novamente.\n");
                    printf("\033[0m");
                    continue;  // Volta ao início do loop
                }

                int quantidade_antes = produtos[produto_encontrado].quantidade;

                // Verifica se a quantidade em estoque é suficiente para realizar a venda
                if (quantidade_antes <= 0 || quantidade_vendida > quantidade_antes)
                {
                    printf("\033[31mQuantidade insuficiente em estoque para realizar a venda ou quantidade inválida.\n");
                    printf("\033[0m");
                } else
                {
                    // Processa a venda apenas se a quantidade em estoque for suficiente
                    produtos[produto_encontrado].quantidade -= quantidade_vendida;

                    if (FLAG_TESTE == 1)
                    {
                        printf("\033[0;33m\nProcessando venda...\n");
                        printf("\033[0m");

                        vendas[*num_vendas].codigo_produto_vendido = produtos[produto_encontrado].codigo;
                        vendas[*num_vendas].quantidade_vendida = quantidade_vendida;
                        vendas[*num_vendas].valor_total = produtos[produto_encontrado].valor * quantidade_vendida;

                        printf("\033[34m\nQuantidade em estoque antes da venda: %d\n", quantidade_antes);
                        printf("\033[34mQuantidade em estoque após a venda: %d\n",
                               produtos[produto_encontrado].quantidade);

                        printf("\033[0;33m\nVenda registrada com sucesso!\n");
                        printf("\033[34mValor da venda: R$ %.2f\n", vendas[*num_vendas].valor_total);

                    } else
                    {
                        if (quantidade_vendida <= produtos[produto_encontrado].quantidade)
                        {
                            // Verificar se o número de vendas não ultrapassa o limite máximo
                            if (*num_vendas < MAX_VENDAS)
                            {
                                // Exibe a quantidade em estoque antes da venda
                                printf("\033[34m\nQuantidade em estoque antes da venda: %d\n", quantidade_antes);

                                // Processa a venda apenas se a quantidade em estoque for suficiente
                                processar_venda(produtos, vendas, produto_encontrado, quantidade_vendida, num_vendas);

                                // Utiliza a função para atualizar a quantidade do produto
                                atualizar_quantidade_produto(produtos, produto_encontrado, quantidade_vendida);

                                float valor_total_venda = produtos[produto_encontrado].valor * quantidade_vendida;

                                printf("\033[0;33m\nVenda registrada com sucesso!\n");
                                printf("\033[34mValor da venda: R$ %.2f\n", valor_total_venda);

                                // Exibe a quantidade em estoque após a venda
                                printf("\033[34mQuantidade em estoque após a venda: %d\n",
                                       produtos[produto_encontrado].quantidade);
                            } else
                            {
                                printf("\033[31m\nLimite máximo de vendas atingido.\n");
                                printf("\033[0m");
                            }
                        } else
                        {
                            printf("\033[31m\nQuantidade insuficiente em estoque para realizar a venda.\n");
                            printf("\033[0m");
                        }
                    }

                    (*num_vendas)++;
                }
            } else
            {
                printf("\033[31mProduto não encontrado. Verifique o código do produto.\n");
                printf("\033[0m");
            }
        }
    }
}