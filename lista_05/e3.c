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

    // Cálculo da distância euclidiana
    double distancia_x = ponto2.ponto_x - ponto1.ponto_x;
    double distancia_y = ponto2.ponto_y - ponto1.ponto_y;
    double dist_euclidiana = sqrt(distancia_x * distancia_x + distancia_y * distancia_y);

    printf("\n\n%.2lf\n", dist_euclidiana);

    return 0;
}
