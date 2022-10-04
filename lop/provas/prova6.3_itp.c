#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor){
    int somaG = 0;
    int somaY = 0;
    int somaR = 0;

    switch(cor) {
        case 'G' :
            // Varredura da parte esquerda da bandeira
            for(int i = 0; i < altura; i++){
                for(int j = 0; j < largura; j++){
                    if(j >= 0 && j < (largura/3)){
                        somaG += bandeira[i][j];
                    }        
                }
            } 
            return somaG;
            break;
        case 'Y' :
            // Varredura da parte central da bandeira
            for(int i = 0; i < altura; i++){
                for(int j = 0; j < largura; j++){
                    if(j >= (largura/3) && j < ((2*largura)/3)){
                        somaY += bandeira[i][j];
                    }        
                }
            }
            return somaY;
            break;
        case 'R' :
            // Varredura da parte direita da bandeira
            for(int i = 0; i < altura; i++){
                for(int j = 0; j < largura; j++){
                    if(j >= ((2*largura)/3) && j < j < largura){
                        somaR += bandeira[i][j];
                    }        
                }
            }
            return somaR;
            break;
    }
}

int main(){ 
    int altura, largura, num_inicial;
    char cor;

    scanf("%d %d %c", &largura, &num_inicial, &cor);

    altura = (largura * 2) / 3;

    int bandeira[altura][largura];

    // Preenche retângulo esquerdo da bandeira
    for(int i = 0; i < altura; i++){
        for(int j = 0; j <= (largura/3); j++){
            bandeira[i][j] = num_inicial + 1;
        }
    }

    // Preenche retângulo central da bandeira
    for(int i = 0; i < altura; i++){
        for(int j = (largura/3); j <= ((2*largura)/3); j++){
            bandeira[i][j] = num_inicial + 2;
        }
    }

    // Preenche retângulo direito da bandeira
    for(int i = 0; i < altura; i++){
        for(int j = ((2*largura)/3); j < largura; j++){
            bandeira[i][j] = num_inicial + 3;
        }
    }

    printf("%d\n", calcular_aposta(largura, altura, bandeira, cor));
	
	return 0;		
}