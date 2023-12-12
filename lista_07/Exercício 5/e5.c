#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Endereco {
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[50];
    char cep[10];
    char cidade[50];
    char estado[3];
    char pais[50];
};

struct Telefone {
    int ddd;
    char numero[15];
};

struct DataAniversario {
    int dia;
    int mes;
    int ano;
};

struct Contato {
    char nome[50];
    char email[50];
    struct Endereco endereco;
    struct Telefone telefone;
    struct DataAniversario aniversario;
    char observacoes[100];
};

void inserirContato(struct Contato *agenda, int *numContatos);
void pesquisarPorNome(struct Contato *agenda, int numContatos, char *nome);
void buscarPorMesAniversario(struct Contato *agenda, int numContatos, int mes);
void imprimirAgenda(struct Contato *agenda, int numContatos);
void salvarAgenda(struct Contato *agenda, int numContatos);

int main() {
    struct Contato agenda[MAX_CONTATOS];
    int numContatos = 0;
    int opcao;

    do {
        printf("\nMenu Principal:\n");
        printf("1) Inserir uma pessoa na agenda\n");
        printf("2) Pesquisar por um nome\n");
        printf("3) Buscar por mês de aniversário\n");
        printf("4) Imprimir a agenda\n");
        printf("5) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirContato(agenda, &numContatos);
                salvarAgenda(agenda, numContatos);
                break;
            case 2: {
                char nomePesquisa[50];
                printf("Digite o nome a ser pesquisado: ");
                scanf("%s", nomePesquisa);
                pesquisarPorNome(agenda, numContatos, nomePesquisa);
                break;
            }
            case 3: {
                int mesAniversario;
                printf("Digite o mês de aniversário a ser buscado: ");
                scanf("%d", &mesAniversario);
                buscarPorMesAniversario(agenda, numContatos, mesAniversario);
                break;
            }
            case 4:
                imprimirAgenda(agenda, numContatos);
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

void inserirContato(struct Contato *agenda, int *numContatos) {
    
    if (*numContatos < MAX_CONTATOS) {
        printf("Inserir novo contato:\n");

        printf("Nome: ");
        scanf("%s", agenda[*numContatos].nome);

        printf("Email: ");
        scanf("%s", agenda[*numContatos].email);

        printf("Endereço (Rua Bairro Número): ");
        getchar();  // Limpa o caractere de nova linha pendente no buffer
        fgets(agenda[*numContatos].endereco.rua, sizeof(agenda[*numContatos].endereco.rua), stdin);
        agenda[*numContatos].endereco.rua[strcspn(agenda[*numContatos].endereco.rua, "\n")] = '\0';  // Remove o caractere de nova linha

        fgets(agenda[*numContatos].endereco.bairro, sizeof(agenda[*numContatos].endereco.bairro), stdin);
        agenda[*numContatos].endereco.bairro[strcspn(agenda[*numContatos].endereco.bairro, "\n")] = '\0';

        printf("Número: ");
        scanf("%d", &agenda[*numContatos].endereco.numero);

        printf("Data de Aniversário (Dia Mês Ano): ");
        scanf("%d %d %d",
              &agenda[*numContatos].aniversario.dia,
              &agenda[*numContatos].aniversario.mes,
              &agenda[*numContatos].aniversario.ano);

        printf("Observações: ");
        getchar(); 
        scanf("%[^\n]", agenda[*numContatos].observacoes);


        (*numContatos)++;
        printf("Contato inserido com sucesso!\n");
    } else {
        printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
    }

    (*numContatos)++;
}

void pesquisarPorNome(struct Contato *agenda, int numContatos, char *nome) {
    
    int i;
    int encontrou = 0;

    printf("\nResultados da pesquisa por nome '%s':\n", nome);

    for (i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            encontrou = 1;
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Endereço: %s, %d, %s, %s, %s, %s, %s, %s\n",
                    agenda[i].endereco.rua, agenda[i].endereco.numero,
                    agenda[i].endereco.complemento, agenda[i].endereco.bairro,
                    agenda[i].endereco.cep, agenda[i].endereco.cidade,
                    agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: %d %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
            printf("Aniversário: %d/%d/%d\n",
                    agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observações: %s\n", agenda[i].observacoes);
            printf("\n");
        }
    }

    if (!encontrou) {
        printf("Nenhum contato encontrado com o nome '%s'.\n", nome);
    }
}

void buscarPorMesAniversario(struct Contato *agenda, int numContatos, int mes) {

    int i;
    int encontrou = 0;

    printf("\nResultados da busca por aniversários no mês %d:\n", mes);

    for (i = 0; i < numContatos; i++) {
        if (agenda[i].aniversario.mes == mes) {
            encontrou = 1;
            printf("Nome: %s\n", agenda[i].nome);
            printf("Email: %s\n", agenda[i].email);
            printf("Endereço: %s, %d, %s, %s, %s, %s, %s, %s\n",
                    agenda[i].endereco.rua, agenda[i].endereco.numero,
                    agenda[i].endereco.complemento, agenda[i].endereco.bairro,
                    agenda[i].endereco.cep, agenda[i].endereco.cidade,
                    agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: %d %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
            printf("Aniversário: %d/%d/%d\n",
                    agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observações: %s\n", agenda[i].observacoes);
            printf("\n");
        }
    }

    if (!encontrou) {
        printf("Nenhum aniversário encontrado no mês %d.\n", mes);
    }
}

void imprimirAgenda(struct Contato *agenda, int numContatos) {
    int i;

    printf("\nAgenda:\n");

    for (i = 0; i < numContatos; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Email: %s\n", agenda[i].email);
        printf("Endereço: %s, %d, %s, %s, %s, %s, %s, %s\n",
                agenda[i].endereco.rua, agenda[i].endereco.numero,
                agenda[i].endereco.complemento, agenda[i].endereco.bairro,
                agenda[i].endereco.cep, agenda[i].endereco.cidade,
                agenda[i].endereco.estado, agenda[i].endereco.pais);
        printf("Telefone: %d %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
        printf("Aniversário: %d/%d/%d\n",
                agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
        printf("Observações: %s\n", agenda[i].observacoes);
        printf("\n");
    }

    if (numContatos == 0) {
        printf("A agenda está vazia.\n");
    }
}

void salvarAgenda(struct Contato *agenda, int numContatos) {
    FILE *arquivo;
    int i;

    arquivo = fopen("agenda.txt", "a+");  // Abre o arquivo para escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (i = 0; i < numContatos; i++) {
        fprintf(arquivo, "Nome: %s\n", agenda[i].nome);
        fprintf(arquivo, "Email: %s\n", agenda[i].email);
        fprintf(arquivo, "Endereço: %s, %d, %s, %s, %s, %s, %s, %s\n",
                agenda[i].endereco.rua, agenda[i].endereco.numero,
                agenda[i].endereco.complemento, agenda[i].endereco.bairro,
                agenda[i].endereco.cep, agenda[i].endereco.cidade,
                agenda[i].endereco.estado, agenda[i].endereco.pais);
        fprintf(arquivo, "Telefone: %d %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
        fprintf(arquivo, "Aniversário: %d/%d/%d\n",
                agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
        fprintf(arquivo, "Observações: %s\n", agenda[i].observacoes);
        fprintf(arquivo, "\n"); 
    }

    fclose(arquivo);  
}

