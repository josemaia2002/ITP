#include <stdio.h>

int calc_divisor(int n, int div){
	if(n % div == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int primo(int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(calc_divisor(n, i) == 1){
			count++;
		}
	}
	if(count == 2){
		return 1;
	}
	else{
		return 0;
	}
}

int gemeos(int n){
	if((primo(n) == 1) && (primo(n + 2) == 1)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int numero;
	scanf("%d", &numero);

	if(gemeos(numero) == 1){
		printf("Numero forma par de gemeos\n");
	}
	else{
		printf("Numero nao forma par de gemeos\n");
	}
	
	return 0;
}