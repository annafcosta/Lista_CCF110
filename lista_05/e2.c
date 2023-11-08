#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    int matricula;
    double nota;
} Alunos;

int main() {

    Alunos alunos[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%s", alunos[i].nome );
        scanf("%d", &alunos[i].matricula);
        scanf("%lf", &alunos[i].nota);
    }
    
    printf("aprovados:\n");
    for (i = 0; i < 10; i++)
    {
        if (alunos[i].nota >= 5.0)
        {
            printf("%s\n", alunos[i].nome);
            printf("%d\n", alunos[i].matricula);
            printf("%.6lf\n", alunos[i].nota);
        }
        
    }

    printf("reprovados:\n");

    for (i = 0; i < 10; i++)
    {
        if (alunos[i].nota < 5.0)
        {
            printf("%s\n", alunos[i].nome);
            printf("%d\n", alunos[i].matricula);
            printf("%.6lf\n", alunos[i].nota);
        }
    }

    return 0;
}
