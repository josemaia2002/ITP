#include <stdio.h>

int main(){
	int a, b, soma;
	scanf("%d %d", &a, &b);

	if ((a%2 == 0) && (b%2 == 0)){
		soma = a + b;
		printf("%d \n", soma);
	}
	else if((a%2 != 0) && (b%2 == 0)){
		printf("Não posso somar, pois %d não é par\n", a);
	}
	else if((a%2 == 0) && (b%2 != 0)){
		printf("Não posso somar, pois %d não é par\n", b);
	}
	else{
		printf("Não posso somar, pois %d não é par\n", a);
		printf("Não posso somar, pois %d não é par\n", b);
	}
	return 0;
}