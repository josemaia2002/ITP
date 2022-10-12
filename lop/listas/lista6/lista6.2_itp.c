#include <stdio.h>
#include <string.h>

void read_line(char linha[], int tam, FILE* f){
	fgets(linha, tam, f);
	while(linha[0] == '\n'){
		fgets(linha, tam , f);
	}
	if(linha[strlen(linha)-1] == '\n'){
		linha[strlen(linha)-1] = '\0';
	}
}

void size(char vet[][200], int tam, int sizes_vet[]){
	for(int i = 0; i < tam; i++){
		sizes_vet[i] = strlen(vet[i]);
	}
}

int maior(char vet[][200], int tam){
	int maior_string = 0;
	for(int i = 0; i < tam; i++){
		if(strlen(vet[i]) > maior_string){
			maior_string = strlen(vet[i]);
		}
	}
	return maior_string;
}

int menor(char vet[][200], int tam){
	int menor_string = strlen(vet[0]);
	for(int i = 0; i < tam; i++){
		if(strlen(vet[i]) < menor_string){
			menor_string = strlen(vet[i]);
		}
	}
	return menor_string;
}

int prox_media(int tam, int sizes_vet[], float avg){
	int best = 0;
	for(int i = 0; i < tam; i++){
		if( (sizes_vet[i] - avg) < (sizes_vet[best] - avg) ){
			best = i;
		}
	}
	return best;
}

int main(){
	int N;
	float media;
	char palavra[200];

	scanf("%d", &N);

	int tamanhos[N];
	char vetor[N][200];

	for(int i = 0; i < N; i++){
		read_line(palavra, 200, stdin);
		sprintf(vetor[i], "%s", palavra);
	}
	printf("Tamanho máximo: %d\n", maior(vetor, N));
	printf("Tamanho mínimo: %d\n", menor(vetor, N));

	size(vetor, N, tamanhos);


	float soma = 0;
	for(int i = 0; i < N; i++){
		soma += tamanhos[i];
	}

	media = soma / N;

	printf("Tamanho médio: %.2f\n", media);

	int closest;
	closest = prox_media(N, tamanhos, media);

	printf("Tamanho mais próximo da média %d\n", tamanhos[closest-1]);

	printf("Textos\n");

	for(int i = 0; i < N; i++){
		if(strlen(vetor[i]) == tamanhos[closest-1]){
			printf("%s\n", vetor[i]);
		}
	}

	return 0;
}