#include <stdio.h>
#include <stdlib.h>

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