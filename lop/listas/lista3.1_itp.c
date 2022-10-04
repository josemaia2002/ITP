#include <stdio.h>

int mdc(int n1, int n2){
	int resultado;

	if(n1 == 0){
		resultado = n2;
	}
	else if(n2 == 0){
		resultado = n1;
	}
	else{
		for(int i = 1; i <= n1 && i <= n2; i++){
			if(n1 % i == 0 && n2%i == 0){
				resultado = i;
			}
		}
	}
	
	return resultado;
}

int main(){
	int numero1, numero2, maximo_divisor;
	scanf("%d", &numero1);
	scanf("%d", &numero2);

	maximo_divisor = mdc(numero1, numero2);

	printf("MDC(%d , %d) = %d", numero1, numero2, maximo_divisor);
	

	return 0;
}