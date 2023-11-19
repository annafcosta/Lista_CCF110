#include <stdio.h>
#include <stdlib.h>

double calcular_medias (double nota_1, double nota_2, double nota_3, char letra){

    double soma = 0, media = 0;

    if (letra == 'A'){
        soma = nota_1 +  nota_3 + nota_2;
        media = soma/3;
        return media;
    }

    double media_ponderada = 0;

    if (letra == 'P'){

        media_ponderada = (nota_1*5 + nota_2*3 + nota_3*2)/10;
        return media_ponderada;
    }

}

int main(){

    double nota_1, nota_2, nota_3;
    char letra;
    scanf("%lf", &nota_1);
    scanf("%lf", &nota_2);
    scanf("%lf", &nota_3);
    scanf(" %c", &letra);
    
    double media = calcular_medias(nota_1, nota_2, nota_3, letra);
    printf("%.6lf\n", media);

    return 0;
}
