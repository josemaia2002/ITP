#include <stdio.h>
#include <stdlib.h>

#define MAX 256

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){
    int arr[MAX][2], brr[MAX][2];
    int special_vet[n];
    int k = 0, temp, count;
    for (int i = 0; i < n; i++){
        arr[i][0] = votes[i];
        arr[i][1] = 0;
    }

    for (int i = 0; i < n; i++){
    if (arr[i][1])
        continue;
    count = 1;
    for (int j = i + 1; j < n; j++){
        if (arr[i][0] == arr[j][0]){
            arr[j][1] = 1;
            count++;
        }
    }
    brr[k][0] = arr[i][0];
    brr[k][1] = count;
    k++;
    }
    n = k;

    for (int i = 0; i < n - 1; i++){
        temp = brr[i][1];
        for (int j = i + 1; j < n; j++){
            if (temp < brr[j][1]){
                temp = brr[j][1];
                brr[j][1] = brr[i][1];
                brr[i][1] = temp;

                temp = brr[j][0];
                brr[j][0] = brr[i][0];
                brr[i][0] = temp;
             }
         }
      }
    int ctrl = 0;
    for (int i = 0; i < n; i++){
        while (brr[i][1] != 0){
            //printf (" %d ", brr[i][0]);
            special_vet[ctrl] = brr[i][0];
            ctrl++;
            brr[i][1]--;
        }   
    }

    int idx = 0;
    while(special_vet[idx] == special_vet[0]){
        //printf("%d\n", special_vet[idx]);
        idx++;
    }
    printf("\n");
    printf("%d %d\n", special_vet[0], special_vet[idx]);
    //printf("%d\n", special_vet[0]);
    //printf("%d\n", special_vet[2]);
}

int main(){
    int quantidade;
    int *votos;

    int primeiro;
    int segundo;

    scanf("%d", &quantidade);

    votos = malloc(quantidade * sizeof(int));

    if(votos){
        for(int i = 0; i < quantidade; i++){
            scanf("%d", votos+i);
        }
    }

    compute_votes(quantidade, votos, &primeiro, &segundo);

    return 0;
}