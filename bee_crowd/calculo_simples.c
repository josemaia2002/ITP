#include <stdio.h>

// URI 1010

int main() {
    int codigo_A, quantidade_A, codigo_B, quantidade_B;
    double preco_A, preco_B, custo_total;

    scanf("%d %d %lf", &codigo_A, &quantidade_A, &preco_A);
    scanf("%d %d %lf", &codigo_B, &quantidade_B, &preco_B);
    
    custo_total = (quantidade_A * preco_A) + (quantidade_B * preco_B);

    printf("VALOR A PAGAR: R$ %.2lf\n", custo_total);

    return 0;
}