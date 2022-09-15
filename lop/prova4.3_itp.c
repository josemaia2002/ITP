#include <stdio.h>

int testa_divisor(int numero, int divisor){
	if(numero % divisor == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int soma_divisores(int value){
	int x = 1;
	int soma = 0;
	for (int i = 1; i < value; i++){
		if(testa_divisor(value, x) == 1){
			soma += x;
		}		
		x++;
	}
	return soma;
}

int testa_amigos(int a, int b){
	if((soma_divisores(a)) == b && (soma_divisores(b)) == a){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){	
	int a, b, c, d, quantidade_amigos = 0;
	
	scanf("%d %d", &a, &b);	
	scanf("%d %d", &c, &d);	

	for (int i = a; i < b; i++){
		for(int j = c; j < d; j++){
			if(i != j){
				if(testa_amigos(i, j) == 1){
					printf("O %d possui um amigo!\n", i);
					quantidade_amigos++;				
				}
			}	
		}
	}
	if(quantidade_amigos == 0){	
		printf("Os intervalos nao apresentam amigos!\n");

	}

	return 0;
}