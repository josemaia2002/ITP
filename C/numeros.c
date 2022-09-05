#include <stdio.h>

int main(){
	int numero = 0;
	int soma = 0;

	while(numero >= 0) {
		scanf("%d", &numero);
		if(numero >= 0){
			soma = soma + numero;
		}
		printf("Soma: %d\n", soma);
	}
}