#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int* arr, int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int i, tam;  
    char space;
    i = 0;
    tam = 1;

    int* vet = (int*) malloc(tam * sizeof(int)); 

    scanf("%d%c", (vet), &space); 
  
    while(space != '\n'){
        i++;  
        tam++;
        vet = realloc(vet, tam * sizeof(int));
        scanf("%d%c", (vet + i), &space);
    }
    
    for(int j = 0; j < tam; j++){
      printf("%d ", *(vet + j));
    }
    printf("\n");

    free(vet);

    return 0; 
}