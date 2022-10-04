#include <stdio.h>

int perfeito(int x){
	int soma = 0;
	for(int i = 1; i < x; i++){
		if(x%i == 0){
			soma += i;
		}	
	}
	if(x == soma){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int quantidade, numero;

	scanf("%d", &quantidade);

	for(int i = 0; i < quantidade; i++){
		scanf("%d", &numero);
		if(perfeito(numero) == 1){
			printf("%d eh perfeito\n", numero);
		}		
		else{
			printf("%d nao eh perfeito\n", numero);
		}
	}

	return 0;
}