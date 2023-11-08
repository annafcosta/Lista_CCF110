#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int main() {

    Data datas[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &datas[i].dia);
        scanf("%d", &datas[i].mes);
        scanf("%d", &datas[i].ano);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d/%d/%d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }

    return 0;
}
