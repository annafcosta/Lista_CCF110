#include <stdio.h>
#include <stdlib.h>

void calcular_fatorial (int num){

    int fatorial = 1;
    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }

    printf("%d", fatorial);

}

int main(){

    int num;
    scanf("%d", &num);

    calcular_fatorial(num);

    return 0;
}
