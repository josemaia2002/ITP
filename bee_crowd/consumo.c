#include <stdio.h>

// URI 1014

int main() {
    int distancia;
    double combustivel, consumo;

    scanf("%d", &distancia);
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("%.3lf km/l\n", consumo);

    return 0;
}