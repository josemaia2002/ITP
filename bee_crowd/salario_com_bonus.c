#include <stdio.h>
#define COMISSAO 0.15

// URI 1009

int main(){
	char nome[20];	
	double salario_base, vendas, salario;


	scanf("%s", &nome);
	scanf("%lf", &salario_base);
	scanf("%lf", &vendas);
	
	salario = salario_base + (vendas * COMISSAO);


	printf("TOTAL = R$ %.2lf\n", salario);

	return 0;
}