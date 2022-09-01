#include <stdio.h>

int main() {
    int petalas;
    printf("Digite a quantidade de petalas\n");
    scanf("%d", &petalas);

    petalas%2 == 0 ? printf("Mal me quer!\n") : printf("Bem me quer!\n");

    return 0;
}