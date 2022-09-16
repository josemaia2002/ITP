#include <stdio.h>
#define CONSUMO 12

// URI 1017

int main() {
    int tempo, velocidade;
    double distancia, combustivel;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = velocidade * tempo;

    combustivel = distancia / CONSUMO;

    printf("%.3lf\n", combustivel);

    return 0;
}