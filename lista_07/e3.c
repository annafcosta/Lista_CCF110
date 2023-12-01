#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char matricula[10];
    char nome[30];
    float nota1;
    float nota2;
    float nota3;

} Alunos;

int main() {

    Alunos aluno[50];
    int qtd_alunos = 0;

    // Inicializar notas 
    for (int i = 0; i < 50; i++) {
        aluno[i].nota1 = 0.0;
        aluno[i].nota2 = 0.0;
        aluno[i].nota3 = 0.0;
    }

    // Ler arquivo
    FILE *arquivo;

    if((arquivo = fopen("alunos.txt", "r")) == NULL){
        printf("Erro ao abrir o arquivo (alunos).");
        return 1;
    }

    while (fscanf(arquivo, "%s %s %f %f %f",
                  aluno[qtd_alunos].matricula,
                  aluno[qtd_alunos].nome,
                  &aluno[qtd_alunos].nota1,
                  &aluno[qtd_alunos].nota2,
                  &aluno[qtd_alunos].nota3) == 5) {
        qtd_alunos++;
    }

    fclose(arquivo);

    // Calcular média e determinar o conceito
    for (int i = 0; i < qtd_alunos; i++) {
        float media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3.0;
        printf("Matricula: %s, Nome: %s, Media: %.2f ",
               aluno[i].matricula,
               aluno[i].nome,
               media);

        if (media >= 8.5) {
            printf("-> Excelente\n");
        } else {
            if (media >= 7) {
                printf("-> Bom\n");
            } else {
                printf("-> Preocupante\n");
            }
        }
    }

    return 0;
}
