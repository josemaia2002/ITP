#include <stdio.h>

int main(){
	int tamanho, n = 1, i = 0, j = 0, linha = 1;

	scanf("%d", &tamanho);

	if(tamanho <= 0){
		printf("Você entrou com %d, tente de novo na próxima", tamanho);
	}
	
	while(i < tamanho){
		j = 0;
		while(j < linha){
			if(n < 10){
				printf(" %d ", n);
			}
			else{
				printf("%d ", n);
			}
			n++;
			j++;
		}
		printf("\n");
		linha++;
		i++;
	}	

	return 0;
}