#include <stdio.h>

int main() {
    float custo_fabrica, custo_distribuidor, custo_imposto, custo_consumidor;

    printf("Digite o valor do custo de fábrica do carro: ");
    scanf("%f", &custo_fabrica);

    custo_distribuidor = custo_fabrica*0.28;
    custo_imposto = custo_fabrica*0.45;

    custo_consumidor = custo_fabrica + custo_distribuidor + custo_imposto;

    printf("O custo total do consumidor será de R$ %.2f\n", custo_consumidor);
    
    return 0;
} 
