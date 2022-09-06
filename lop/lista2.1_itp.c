#include <stdio.h>
#include <math.h>

int main(){
	double aritmetica, geometrica, harmonica;
	int numero;
	numero = aritmetica = harmonica = 0;
	geometrica = 1;

	for (int i = 0; i < 10; ++i){
		scanf("%d", &numero);
		aritmetica = aritmetica + numero;
		geometrica = geometrica * numero;
		harmonica = harmonica + pow(numero, -1);
	}
	aritmetica = aritmetica / 10;
	geometrica = pow(geometrica, 0.1);
	harmonica = 10 / harmonica;

	// TODO Implementar cálculo de erro médio

	printf("Média aritmética é %.2lf\n", aritmetica);
	printf("Média harmônica é %.2lf\n", harmonica);
	printf("Média geométrica é %.2lf\n", geometrica);

	return 0;
}