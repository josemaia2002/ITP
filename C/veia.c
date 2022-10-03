#include <stdio.h>


/*
int verificaLinha(int x, int y, char vet[x][y], char simb){
    if(vet[x][0] + vet[x][1] + vet[x][2] == 3*simb){
        return 1;
    }
    else {
        return 0;
    }
}

int verificaColuna(int x, int y, char vet[x][y], char simb){
    if(vet[0][y] + vet[1][y] + vet[2][y] == 3*simb){
        return 1;
    }
    else {
        return 0;
    }
}

int verificaDiagonalPrincipal(int x, int y, char vet[x][y], char simb){
    if(vet[0][0] + vet[1][1] + vet[2][2] == 3*simb){
        return 1;
    }
    else {
        return 0;
    }
}

int verificaDiagonalSecundaria(int x, int y, char vet[x][y], char simb){
    if(vet[2][0] + vet[1][1] + vet[0][2] == 3*simb){
        return 1;
    }
    else {
        return 0;
    }
}

*/

int posicao(int x, int y, char vet[x][y]) {
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

void boa_jogada(){
    printf("Boa jogada, vai vencer!\n");
}

void continua(){
    printf("Continua o jogo.\n");
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
        linha--;
        coluna--;
        if(tabuleiro[linha][coluna] == '.'){

            tabuleiro[linha][coluna] = simbolo;

            switch(posicao(linha, coluna, tabuleiro)) {
                case 1 :
                    if((tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2] == 3*simbolo) || (tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna] == 3*simbolo)){
                        boa_jogada();
                    }
                    else{
                        continua();
                    }
                    break;
                case 2 :
                    if(((linha == 0) && (coluna == 0)) || ((linha == 2) && (coluna == 2)) ){
                        if((tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2] == 3*simbolo) || (tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna] == 3*simbolo) || (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] == 3*simbolo)){
                            boa_jogada();
                        }
                        else{
                            continua();
                        }
                    }
                    else{
                        if((tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2] == 3*simbolo) || (tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna] == 3*simbolo) || (tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == 3*simbolo)){
                            boa_jogada();
                        }
                        else{
                            continua();
                        }
                    }
                    break;
                case 3 :
                    if((tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2] == 3*simbolo) || (tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna] == 3*simbolo) || (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] == 3*simbolo) || (tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == 3*simbolo)){
                        boa_jogada();
                    }
                    else{
                        continua();
                    }
                    break;
            }
            tabuleiro[linha][coluna] = '.';
        }
        else{
            printf("Jogada inválida!\n");
        }
        
	}
	return 0;		
}