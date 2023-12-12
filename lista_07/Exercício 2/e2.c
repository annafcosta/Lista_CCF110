#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo, *pares;

    int x;

    if((arquivo = fopen("números.txt", "r")) == NULL){
        printf("Erro ao abrir o arquivo (números).");
    } 

    if((pares = fopen("pares.txt", "w")) == NULL){
        printf("Erro ao abrir o arquivo (pares).");
    } 

    while(fscanf(arquivo,"%d\n", &x) != EOF){
        if(x % 2 == 0){
            fprintf(pares,"%d\n",x);
        }
    }

    return 0;
}