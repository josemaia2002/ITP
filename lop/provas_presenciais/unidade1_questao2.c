#include <stdio.h>

void rotate(int x, int y, int m1[x][y], int m_aux[x][y], int size){
    int ctrlColuna = 0;
    int ctrlLinha = size - 1;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            m_aux[i][j] = m1[ctrlLinha][ctrlColuna];
            ctrlLinha--;
        }
        ctrlColuna++;
        ctrlLinha = size - 1;
    }
}

int main(){
    int tamanho;
    int angulo;

    scanf("%d", &angulo);

    scanf("%d", &tamanho);


    int matriz[tamanho][tamanho];
    int matriz_auxiliar[tamanho][tamanho];
    int matriz_auxiliar1[tamanho][tamanho];
    int matriz_auxiliar2[tamanho][tamanho];



	
	// Preenchimento da matriz
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
    
    

    if(angulo == 90){
        rotate(tamanho, tamanho, matriz, matriz_auxiliar, tamanho);

        for(int i = 0; i < tamanho; i++){
		    for(int j = 0; j < tamanho; j++){
			    printf("%d ", matriz_auxiliar[i][j]);
		    }
            printf("\n");
	    }
    }
    else if(angulo == 180){
        rotate(tamanho, tamanho, matriz, matriz_auxiliar, tamanho);
        rotate(tamanho, tamanho, matriz_auxiliar, matriz_auxiliar1, tamanho);

        for(int i = 0; i < tamanho; i++){
		    for(int j = 0; j < tamanho; j++){
			    printf("%d ", matriz_auxiliar1[i][j]);
		    }
            printf("\n");
	    }
    }
    else{
        rotate(tamanho, tamanho, matriz, matriz_auxiliar, tamanho);
        rotate(tamanho, tamanho, matriz_auxiliar, matriz_auxiliar1, tamanho);
        rotate(tamanho, tamanho, matriz_auxiliar1, matriz_auxiliar2, tamanho);

        for(int i = 0; i < tamanho; i++){
		    for(int j = 0; j < tamanho; j++){
			    printf("%d ", matriz_auxiliar2[i][j]);
		    }
            printf("\n");
	    }
    }
    return 0;
}