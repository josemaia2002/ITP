#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void compute_votes(int n, int* votes, int* most_voted, int* second_most_voted){
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++) {
        min_idx = i;
        for(j = i + 1; j < n; j++){
            if(votes[j] > votes[min_idx]){
                min_idx = j;
            }
            else if(votes[j] == votes[min_idx]){
                if(votes[j] > votes[min_idx]){
                    min_idx = j;
                }
                else if(votes[j] == votes[min_idx]){
                    if(votes[j] > votes[min_idx]){
                        min_idx = j;
                    }
                }
            }
        }
        swap(&votes[min_idx], &votes[i]); 
    }

    int candidatos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int votos_vet[10] = {0};

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < n; j++){
            if(candidatos[i] == votes[j]){
                votos_vet[i]++;
            }
        }
    }
        
    int first = 0;
    int second = 0;

    int max_idx = 0;
    int snd_idx = 0;

    for(int i = 0; i < 10; i++){
        if(votos_vet[i] > first){
            first = votos_vet[i];
            max_idx = i;
        }
    } 

    for(int i = 0; i < 10; i++){
        if((votos_vet[i] > second) && (votos_vet[i] < first)){
            second = votos_vet[i];
            snd_idx = i;
        }
    } 

    max_idx++;
    snd_idx++;

    *most_voted = max_idx;
    *second_most_voted = snd_idx;
}
    
int main(){
    int quantidade;    
    int* votos;

    int primeiro;
    int segundo;

    scanf("%d", &quantidade);


    votos = (int*)malloc(quantidade * sizeof(int));

    if(votos){
        for(int i = 0; i < quantidade; i++){
            scanf("%d", votos+i);
        }
    }

    compute_votes(quantidade, votos, &primeiro, &segundo);

    printf("%d %d\n", primeiro, segundo);

    free(votos);

    return 0;
}