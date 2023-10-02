#include <stdio.h>

int main()
{
    float v_max, v_motorista, diferenca_v;

    printf("Digite a velocidade máxima permitida na rodovia: ");
    scanf("%f", &v_max);
    
    printf("Digite a velocidade que o motorista estava dirigindo: ");
    scanf("%f", &v_motorista);

    diferenca_v = v_motorista - v_max;

    if (diferenca_v <= 10) 
    {
        printf("Será cobrado uma multa de R$ 50,00.\n");
    } 

    else if (diferenca_v <= 30) 
    {
        printf("Será cobrado uma multa de R$ 100,00.\n");
    } 
    else 
    {
        printf("Será cobrado uma multa de R$ 200,00.\n");
    }

    return 0;
}