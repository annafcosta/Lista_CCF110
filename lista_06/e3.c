#include <stdio.h>
#include <stdlib.h>

void mostrar_num (int num){

    if (num % 2 == 0){
        printf("1\n");
    }

    else {
        printf("-1\n");
    }
}

int main(){

    int num;
    scanf("%d", &num);

    mostrar_num(num);

    return 0;
}
