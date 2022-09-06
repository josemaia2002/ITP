#include <stdio.h>

int main(){
	int numero, soma;
	soma = 0;

	// Inicialização
	scanf("%d", &numero);

	while(numero > 0) {  			// Condição de parada
		soma = soma + numero;
		scanf("%d", &numero);		// Atualização
	}
	printf("Soma igual a: %d\n", soma);

	return 0;
}