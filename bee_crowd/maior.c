#include <stdio.h>

// URI 1013

int main(){
	int a, b, c, maior;

	scanf("%d %d %d", &a, &b, &c);

	/*
	if(a > b && a > c){
		maior = a;
	}
	else if(b > a && b > c){
		maior = b;
	}
	else{
		maior = c;
	}

	*/

	maior = (a + b + abs(a-b)) / 2;
	maior = (maior + c + abs(maior-c)) / 2;

	printf("%d eh o maior\n", maior);


	return 0;
}