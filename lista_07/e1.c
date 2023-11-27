#include <stdio.h>

int calculadora (int num_1, int num_2, char operacao){

    if(operacao == 'A'){
        return num_1 + num_2;
    }

    else if (operacao == 'S') {
        return num_1 - num_2;
    } 

    else {
        return 0;
    }

}

void salvar_arquivo (int num_1, int num_2, char operacao, int resultado){
    
    FILE *arquivo;

    if((arquivo = fopen("caculadora.txt", "w")) == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%d %c %d = %d\n", num_1, operacao, num_2, resultado);
    fclose(arquivo);
}


int main() {

    int n1, n2, resultado;
    char OP;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf(" %c", &OP);

    resultado = calculadora(n1, n2, OP);

    if(resultado != 0){
        salvar_arquivo(n1, n2, OP, resultado);
        printf("Resultado: %d foi gravado em calculadora.txt\n", resultado);
    }

    return 0;

}