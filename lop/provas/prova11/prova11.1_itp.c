#include <stdio.h>

int converter(int n, int *count, int* vet){
	if(n < 1){
		vet[*count] = 0;
    	return 0;
	}
	else{
		vet[(*count)] = n%2;
		(*count)++; 
		return converter(n/2, count, vet);
	}
}

int main(){
	int count = 0;
	int numero;

	int vet[40];

	scanf("%d", &numero);
	converter(numero, &count, vet);

	if(count == 0){
    	printf("%d\n", vet[0]);
  	}
  	else{
    	for(int i = count-1; i >= 0; i--){
			printf("%d", vet[i]);
  		}
	  	printf("\n");
  	}
  
	return 0;
}   