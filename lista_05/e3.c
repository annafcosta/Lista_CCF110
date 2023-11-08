#include <stdio.h>
#include <math.h>

typedef struct {
    double ponto_x;
    double ponto_y;
} Coordenadas;

int main() {
    Coordenadas ponto1, ponto2;

    // Leitura das coordenadas do primeiro ponto
    scanf("%lf %lf", &ponto1.ponto_x, &ponto1.ponto_y);

    // Leitura das coordenadas do segundo ponto
    scanf("%lf %lf", &ponto2.ponto_x, &ponto2.ponto_y);

    double distacia1 = pow(ponto2.ponto_x - ponto1.ponto_x, 2);
    double distancia2 = pow(ponto2.ponto_y - ponto1.ponto_y, 2);
    double dist_euclidiana = sqrt(distacia1 + distancia2);


    printf("%.2lf\n", dist_euclidiana);

    return 0;
}
