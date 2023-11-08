#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    double p1, p2, p3;
} Alunos;

int main() {

    Alunos aluno[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%s", aluno[i].nome);
        scanf("%d", &aluno[i].matricula);
        scanf("%lf %lf %lf", &aluno[i].p1,&aluno[i].p2, &aluno[i].p3 );
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", aluno[i].nome);
        printf("%.2lf %.2lf %.2lf\n\n", aluno[i].p1,aluno[i].p2, aluno[i].p3 );
    }

   
    return 0;
}
