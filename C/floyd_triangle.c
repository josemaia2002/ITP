#include <stdio.h>

int main(){
	int tamanho, n = 1, i = 0, j = 0, linha = 1;

	scanf("%d", &tamanho);

	if(tamanho == 0){
		printf("Você entrou com 0, tente de novo na próxima");
	}

	while(i < tamanho){
		j = 0;
		while(j < linha){
			printf("%d ", n);
			n++;
			j++;
		}
		printf("\n");
		linha++;
		i++;
	}	

	return 0;
}

