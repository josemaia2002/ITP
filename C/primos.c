#include <stdio.h>

int main(){
	int i, minimo, maximo, count, aux;

	scanf("%d %d", &minimo, & maximo);

	if(minimo > maximo){
		aux = maximo;
		maximo = minimo;
		minimo = aux;
	}

	for (i = minimo; i <= maximo; ++i){
		count = 0;
		for (int j = 1; j <= i; ++j){
			if (i%j == 0){
				count++;
			}
		}
		if (count == 2){
			printf("%d\n", i);
		}
	}
	return 0;
}