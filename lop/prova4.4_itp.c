#include <stdio.h>

int ehPar(int numero){
	if(numero % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	if(ehPar(n) == 1){
		printf("true");
	}
	else{
		printf("false");
	}
	
	return 0;
}