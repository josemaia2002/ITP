#include <stdio.h>

int legal(int index, int *vet){
    if(index > 0) {
        if((vet[index] - vet[index -1]) % 2 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int tamanho;
    int aux = 0;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    // Preenchimento do vetor
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    // Verificação do vetor
    for (int i = 0; i < tamanho; i++){
        if(legal(i, vetor) == 0){
            aux++;
        }
    }

    if(aux <= 1){
        printf("Legal\n");
    }
    else{
        printf("Chato\n");

    }

    return 0;
}