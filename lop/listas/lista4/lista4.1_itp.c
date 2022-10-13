#include <stdio.h>

int multiplo2(int n){
	if(n % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int multiplo3(int n){
	if(n % 3 == 0){
		return 1;
	}
	else{
		return 0;
	}
}


int main(){
	int qte_B, qte_C, qte_D;
	qte_B = qte_C = qte_D = 0;

	int vetorA[15];

	int vetorB[15] = {0};
	int vetorC[15] = {0};
	int vetorD[15] = {0};
	

	for(int i = 0; i < 15; i++){
		scanf("%d", &vetorA[i]);
	}

	int indexB = 0;
	int indexC = 0;
	int indexD = 0;

	for(int i = 0; i < 15; i++){
		if(multiplo2(vetorA[i]) == 1){
			vetorB[indexB] = vetorA[i];
			indexB++;
			qte_B++;
		}
		if(multiplo3(vetorA[i]) == 1){
			vetorC[indexC] = vetorA[i];
			indexC++;
			qte_C++;
		}
		if((multiplo2(vetorA[i]) == 0) && (multiplo3(vetorA[i]) == 0)){
			vetorD[indexD] = vetorA[i];
			indexD++;
			qte_D++;
		}
	}

	printf("B = [");

	for(int i = 0; i < qte_B; i++){
		if(i < qte_B-1){
			printf("%d, ", vetorB[i]);
		}
		else{
			printf("%d", vetorB[i]);
		}
	}

	printf("]");

	printf("\n");

	printf("C = [");

	for(int i = 0; i < qte_C; i++){
		if(i < qte_C-1){
			printf("%d, ", vetorC[i]);
		}
		else{
			printf("%d", vetorC[i]);
		}
	}

	printf("]");

	printf("\n");

	printf("D = [");

	for(int i = 0; i < qte_D; i++){
		if(i < qte_D-1){
			printf("%d, ", vetorD[i]);
		}
		else{
			printf("%d", vetorD[i]);
		}
	}
	printf("]");

	printf("\n");

	return 0;
}