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

void append(int n, int *vet, int index){
	vet[index] = n;
}

int main(){
	int qte_B, qte_C, qte_D;
	qte_B = qte_C = qte_D = 0;

	int vetorA[15];
	

	for(int i = 0; i < 15; i++){
		scanf("%d", &vetorA[i]);
	}

	for(int i = 0; i < 15; i++){
		if(multiplo2(vetorA[i]) == 1){
			qte_B++;
		}
		if(multiplo3(vetorA[i]) == 1){
			qte_C++;
		}
		if((multiplo2(vetorA[i]) == 0) && (multiplo3(vetorA[i]) == 0)){
			qte_D++;
		}
	}

	int vetorB[qte_B];
	int vetorC[qte_C];
	int vetorD[qte_D];

	for(int i = 0; i < 15; i++){
		int indiceB = 0;
		int indiceC = 0;
		int indiceD = 0;
		if(multiplo2(vetorA[i]) == 1){
			append(vetorA[i], vetorB, indiceB);
			indiceB++;
		}
		if(multiplo3(vetorA[i]) == 1){
			append(vetorA[i], vetorC, indiceC);
			indiceC++;
		}
		if((multiplo2(vetorA[i]) == 0) && (multiplo3(vetorA[i]) == 0)){
			append(vetorA[i], vetorD, indiceD);
			indiceD++;
		}
	}

	
	for(int i = 0; i < 7; i++){
		printf("%d ", vetorB[i]);
	}

	printf("\n");

	for(int i = 0; i < 5; i++){
		printf("%d ", vetorC[i]);
	}

	printf("\n");

	for(int i = 0; i < 5; i++){
		printf("%d ", vetorD[i]);
	}

	printf("\n");

	return 0;
}