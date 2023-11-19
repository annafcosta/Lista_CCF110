#include <stdio.h>

double peso_ideal(double altura, char sexo)
{   
    if (sexo == 'M')
    {
    double peso_M = 0.727 * altura - 58.0;
    return peso_M;
    } 

    else if (sexo == 'F')
    {
    double peso_F = 0.621 * altura - 44.7;
    return peso_F;
    } 
}

int main()
{

    double altura;
    char sexo;
    scanf("%lf %c", &altura, &sexo);


    double resultado = peso_ideal(altura, sexo);
    printf("%.2lf", resultado);
    
    return 0;
}