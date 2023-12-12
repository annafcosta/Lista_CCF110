#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 100

typedef struct {
    char titulo[30];
    char autor[15];
    int ano_publicacao;
} Livro;

void listar_livros(Livro livros[], int qtd_livro) {
    printf("\nLista de Livros:\n");
    for (int i = 0; i < qtd_livro; i++) {
        printf("Título: %s, Autor: %s, Ano de Publicação: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
    }
}

void pesquisar_livro(Livro livros[], int qtd_livro, char titulo[]) {
    for (int i = 0; i < qtd_livro; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            printf("Livro encontrado:\n");
            printf("Título: %s, Autor: %s, Ano de Publicação: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
            return;
        }
    }
    printf("Livro não encontrado.\n");
}

void inserir_livro(Livro livros[], int *qtd_livros) {
    if (*qtd_livros < MAX_LIVROS) {
        printf("Digite o título do livro: ");
        scanf("%s", livros[*qtd_livros].titulo);

        printf("Digite o autor do livro: ");
        scanf("%s", livros[*qtd_livros].autor);

        printf("Digite o ano de publicação do livro: ");
        scanf("%d", &livros[*qtd_livros].ano_publicacao);

        (*qtd_livros)++;
        printf("Livro inserido com sucesso!\n");
    } 
    else {
        printf("Limite máximo de livros atingido.\n");
    }
}

int main() {

    Livro livros[MAX_LIVROS];
    int qtd_livros = 0;

    FILE *arquivo;

    arquivo = fopen("livros.txt", "r");
    if (arquivo != NULL) {
        while (fscanf(arquivo, "%s %s %d", livros[qtd_livros].titulo, livros[qtd_livros].autor, &livros[qtd_livros].ano_publicacao) == 3) {
            qtd_livros++;
            if (qtd_livros >= MAX_LIVROS) {
                break;
            }
        }
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo 'livros.txt'.\n");
        return 1;
    }

    int opcao;
    char titulo_busca[30];

    do {
        printf("\n--- Menu ---\n");
        printf("1. Pesquisar Livro\n");
        printf("2. Inserir Livro\n");
        printf("3. Listar Livro\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o título do livro a ser pesquisado: ");
                scanf("%s", titulo_busca);
                pesquisar_livro(livros, qtd_livros, titulo_busca);
                break;

            case 2:
                inserir_livro(livros, &qtd_livros);
                break;

            case 3:
                listar_livros(livros, qtd_livros);
                break;

            case 4:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 4);

    // Atualizar o arquivo com os livros
    arquivo = fopen("livros.txt", "a");

    if (arquivo != NULL) {
        for (int i = 0; i < qtd_livros; i++) {
            fprintf(arquivo, "%s %s %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
        }

        fclose(arquivo);

    } else {
        printf("Erro ao abrir o arquivo (livros.txt) para escrita.\n");
    }

    return 0;
}
