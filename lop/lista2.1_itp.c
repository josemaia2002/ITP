#include <stdio.h>
#include <math.h>

int main(){
	double aritmetica, geometrica, harmonica, erro_harmonica, erro_geometrica, erro_medio;
	int numero;
	char porcento = '%';
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
	erro_harmonica = (harmonica - aritmetica) / aritmetica;
	erro_geometrica = (geometrica - aritmetica) / aritmetica;
	erro_medio = ((erro_harmonica + erro_geometrica) / 2) * 100;

	printf("Média aritmética é %.2lf\n", aritmetica);
	printf("Média harmônica é %.2lf\n", harmonica);
	printf("Média geométrica é %.2lf\n", geometrica);
	printf("Erro médio é %.2lf %c \n", erro_medio, porcento);

	return 0;
}