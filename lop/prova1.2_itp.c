#include <stdio.h>

int main(){
	int quantidade;
	float indice, popularidade;
	char letra;
	scanf("%c %d %f", &letra, &quantidade, &indice);
	popularidade = quantidade * indice;
	printf("A popularidade de %c é %.1f \n", letra, popularidade);
	return 0;
}