#include <stdio.h>
#include <stdlib.h>

int soma_numeros (int num_1, int num_2){

    if (num_1 > num_2){
        return 0;
    }

    int soma = 0;

    for (int i = num_1; i <= num_2; i++)
    {
        soma += i;
    }
    
    return soma;

}

int main(){

    int num_1, num_2;
    scanf("%d", &num_1);
    scanf("%d", &num_2);

    int soma = soma_numeros(num_1, num_2);
    printf("%d", soma);

    return 0;
}
