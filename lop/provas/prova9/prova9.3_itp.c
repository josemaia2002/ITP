#include <stdio.h>
#include <stdlib.h>

int get_range(int n, int* cells, int distance, int user, int* left_index, int* right_index){
    int cells_in_range = 0;

    for(int i = 0; i < n; i++){
        if((cells[i] > *left_index) && (cells[i] < *right_index)){
            cells_in_range++;
        }
    }

    return cells_in_range;
}
    
int main(){
    int qte_celulas;  
    int distancia;
    int posicao;

    int* celulas;

    scanf("%d %d %d", &qte_celulas, &distancia, &posicao);

    int indice_esquerda = posicao - distancia;
    int indice_direita = posicao + distancia;


    celulas = (int*)malloc(qte_celulas * sizeof(int));

    if(celulas){
        for(int i = 0; i < qte_celulas; i++){
            scanf("%d", celulas+i);
        }
    }

    int resultado = get_range(qte_celulas, celulas, distancia, posicao, &indice_esquerda, &indice_direita);

    if(resultado > 0){
        for(int i = 0; i < qte_celulas; i++){
            if((celulas[i] >= indice_esquerda) && (celulas[i] <= indice_direita)){
                printf("%d ", celulas[i]);
            }
        }
        printf("\n");
    }
    else{
        printf("USUARIO DESCONECTADO\n");
    }

    free(celulas);

    return 0;
}