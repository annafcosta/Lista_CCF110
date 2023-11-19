#include <stdio.h>
#include <stdlib.h>

void calcular_idade_em_dias (int anos, int meses, int dias){

    int idade_em_dias = (anos * 365) + (meses * 30) + dias;

    printf("%d", idade_em_dias);

}

int main(){

    int anos, meses, dias;
    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);

    calcular_idade_em_dias(anos, meses, dias);

    return 0;
}
