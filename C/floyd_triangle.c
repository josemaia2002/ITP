#include <stdio.h>

int main(){
	int tamanho, n = 1, i = 0, j = 0, linha = 1;

	scanf("%d", &tamanho);

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