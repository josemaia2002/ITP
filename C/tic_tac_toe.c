#include <stdio.h>

// Verifica se a jogada é válida
int verif(int x, int y, char vet[x][y]) {
	x = x - 1;
	y = y - 1;
	if(vet[x][y] == '.') {
		return 1;
	}
	else {
		return 0;
	}
}

void caso1(int x, int y, char vet[x][y], char simb){
	x = x - 1;
	y = y - 1;
	int countLinha = 0;
	int countColuna = 0;
	for(int i = 0; i < 3; i++){
		if(vet[x][i] == simb){
			countLinha++;
		}
		if(vet[i][x] == simb){
			countColuna++;
		}
	}
	if((countLinha >= 2) || (countColuna >= 2)){
		printf("Boa jogada, vai vencer!\n");
	}
	else{
		printf("Continua o jogo.\n");

	}

}

void caso2(int x, int y, char vet[x][y], char simb){
	x = x - 1;
	y = y - 1;
	int countLinha = 0;
	int countColuna = 0;
	int countDiagonal = 0;

	// Diagonal primária

	if((x == 0 && y == 0) || (x == 2 && y == 2)){
		for(int i = 0; i < 3; i++){
			if(vet[x][i] == simb){
				countLinha++;
			}
			if(vet[i][x] == simb){
				countColuna++;
			}
			if(vet[i][i] == simb){
				countDiagonal++;
			}
		}
	}
	// Diagonal secundária
	else{
		for(int i = 0; i < 3; i++){
			if(vet[x][i] == simb){
				countLinha++;
			}
			if(vet[i][x] == simb){
				countColuna++;
			}
			if((vet[2][0] == simb) || (vet[1][1] == simb) || (vet[0][2] == simb)){
				countDiagonal++;
			}
		}
	}

	if((countLinha >= 2) || (countColuna >= 2) || (countDiagonal >= 2)){
		printf("Boa jogada, vai vencer!\n");
	}
	else{
		printf("Continua o jogo.\n");

	}
}

void caso3(int x, int y, char vet[x][y], char simb){
	x = x - 1;
	y = y - 1;
	int countLinha = 0;
	int countColuna = 0;
	int countDiagonal = 0;

	for(int i = 0; i < 3; i++){
		if(vet[x][i] == simb){
			countLinha++;
		}
		if(vet[i][x] == simb){
			countColuna++;
		}
		if(vet[i][i] == simb){
			countDiagonal++;
		}
		if((vet[2][0] == simb) || (vet[1][1] == simb) || (vet[0][2] == simb)){
			countDiagonal++;
		}

	}

	if((countLinha >= 2) || (countColuna >= 2) || (countDiagonal >= 2)){
		printf("Boa jogada, vai vencer!\n");
	}
	else{
		printf("Continua o jogo.\n");

	}
}

int posicao(int x, int y, char vet[x][y]) {
	x = x - 1;
	y = y - 1;

	if((x == 0 && y == 1) || (x == 1 && y == 0) || (x == 2 && y == 1) || (x == 1 && y == 2)){
		return 1;
	}


	else if(x == 1 && y == 1){
		return 3;

	}
	else{
		return 2;
	}
}

int main(){
	char tabuleiro[3][3];
	int jogadas; // Quantidade de jogadas
	int linha, coluna; // Coordenadas
	char simbolo; // Símbolo do jogador, pode ser X ou O
	
	// Preenchimento do tabuleiro
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf(" %c", &tabuleiro[i][j]);
		}
	}

	scanf("%d", &jogadas);

	for(int i = 0; i < jogadas; i++){
		scanf("%d %d %c", &linha, &coluna, &simbolo);
		if (verif(linha, coluna, tabuleiro) == 1) {
			if(posicao(linha, coluna, tabuleiro) == 1){
				//caso1(linha, coluna, tabuleiro, simbolo);
				printf("Caso1\n");

			}	
			else if(posicao(linha, coluna, tabuleiro) == 2){
				//caso2(linha, coluna, tabuleiro, simbolo);
				printf("Caso2\n");

			}
			else {
				//caso3(linha, coluna, tabuleiro, simbolo);
				printf("Caso3\n");

			}
		}
		else {
			printf("Jogada inválida!\n");

		}
	}
	
	return 0;		
}