#include <stdio.h>

int main(){
	int numero, reverso, original;
	reverso = 0;

	scanf("%d", &numero);

	original = numero;

	while(numero != 0){
		reverso = reverso * 10 + (numero % 10);
		numero = numero / 10;
	}

	if(original == reverso){
		if(original % 2 == 0){
			printf("%d é Palíndromo e par.\n", original);
		}
		else{
			printf("%d é Palíndromo e impar.\n", original);
		}
	}
	else{
		if(original % 2 == 0){
			printf("%d não é Palíndromo e par.\n", original);
		}
		else{
			printf("%d não é Palíndromo e impar.\n", original);
		}
	}
	
	return 0;
}