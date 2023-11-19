#include <stdio.h>

int calcular_segundos(int hora, int minuto, int segundo) {
    int total_segundos = hora * 3600 + minuto * 60 + segundo;
    return total_segundos;
}

int main() {
    int hora, minuto, segundo;

    scanf("%d", &hora);
    scanf("%d", &minuto);
    scanf("%d", &segundo);

    int resultado = calcular_segundos(hora, minuto, segundo);

    printf("%d\n", resultado);

    return 0;
}
