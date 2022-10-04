#include <stdio.h>

int main(){
	int linha, coluna; // Dimensões

    // Quantidade de recursos
    float agua = 0;
    float especie_hostil = 0;
    float deserto = 0;
    float vegetacao = 0;
    float sem_recurso = 0;

    // Percentual de cada recurso   
    float porcent_agua;
    float porcent_especie_hostil;
    float porcent_deserto;
    float porcent_vegetacao;
    float porcent_sem_recurso;


    scanf("%d %d", &linha, &coluna); // Recebe dimensões da matriz

    char matriz[linha][coluna]; // Declara matriz
	
	// Preenchimento da matriz
	for(int i = 0; i < linha; i++){
		for(int j = 0; j < coluna; j++){
			scanf(" %c", &matriz[i][j]);
		}
	}


    // Varredura da matriz
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            switch(matriz[i][j]) {
                case '~' :
                    agua++;                    
                    break;
                case 'X' :
                    especie_hostil++;
                    break;
                case '^' :
                    deserto++;
                    break;
                case '*' :
                    vegetacao++;
                    break;
                case '.' :
                    sem_recurso++;
                    break;
            }
        }
    }

    // Cálculo do percentual de cada recurso
    porcent_agua = agua / (linha*coluna);
    porcent_especie_hostil = especie_hostil / (linha*coluna);
    porcent_deserto = deserto / (linha*coluna);
    porcent_vegetacao = vegetacao / (linha*coluna);
    porcent_sem_recurso  = sem_recurso / (linha*coluna);


    // Verificação do status do planeta
    if(especie_hostil > 0){
        printf("Planeta Hostil\n");
    }
    else if(porcent_agua > 0.85){
        printf("Planeta Aquático\n");
    }
    else if(porcent_deserto > 0.6){
        printf("Planeta Desértico\n");
    }
    else if(porcent_vegetacao > 0.65){
        printf("Planeta Selvagem\n");
    }
    else if(porcent_agua > 0.5 && porcent_vegetacao > 0.2){
        printf("Planeta Classe M\n");
    }
    else{
        printf("Planeta Inóspito\n");

    }
	return 0;		
}