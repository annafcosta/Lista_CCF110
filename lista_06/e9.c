#include <stdio.h>

typedef struct {
    char sexo;
    int cor_olhos;
    int cor_cabelos;
    int idade;
} Habitante;

void registro_dados_habitantes(Habitante habitantes[], int n) {

    for (int i = 0; i < n; ++i) {

        scanf(" %c", &habitantes[i].sexo);
        scanf("%d", &habitantes[i].cor_olhos);
        scanf("%d", &habitantes[i].cor_cabelos);
        scanf("%d", &habitantes[i].idade);

    } 

}

int main(){

    int n = 10;

    Habitante habitantes[n];

    registro_dados_habitantes(habitantes, n);
    
     for (int i = 0; i < n; ++i) {
        printf("%c\n", habitantes[i].sexo);
        printf("%d\n", habitantes[i].cor_olhos);
        printf("%d\n", habitantes[i].cor_cabelos);
        printf("%d\n", habitantes[i].idade);
    }

    return 0;
}