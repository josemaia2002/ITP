#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_line(char linha[], int tam, FILE* f){
    fgets(linha, tam, f);
    while(linha[0] == '\n'){
        fgets(linha, tam , f);
    }
    if(linha[strlen(linha)-1] == '\n'){
        linha[strlen(linha)-1] = '\0';
    }
} 

int inside(int indice, int *vet, int n){
    int existe = 0;
    int i;
    for(i = 0; i < n; i++){
        if(indice == vet[i]){
            existe = 1;
            break;
        }
    }
    if(existe == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int i, tam;  
    char space[51];
    i = 0;
    tam = 0;

    int row = 100, col = 51;
    char **participantes;  
    participantes = malloc(sizeof(char*) * row);

    for(int j = 0; j < row; j++)
        participantes[j] = malloc(sizeof(char) * col);

    read_line(space, 51, stdin);

    if(strcmp(space, "acabou") != 0){
        strcpy(participantes[i], space);
    }
  
    while(strcmp(space, "acabou") != 0){
        i++;   
        tam++; 
        read_line(space, 51, stdin);
        if(strcmp(space, "acabou") != 0){
           strcpy(participantes[i], space);
        }
    }

    int seed;
    scanf("%d", &seed);

    srand(seed);

    int indice_participante;
    int indices[tam];

    for(int j = 0; j < tam; j++){
        indices[j] = -1;
    }
    
    int ctrl = 0;

    while(ctrl < tam){
        indice_participante = rand()%tam;
        if(inside(indice_participante, indices, tam - 1) == 0){
            indices[ctrl] = indice_participante;
            ctrl++;
        }
    }

    for(i = 0; i < tam; i++){
        printf("%s\n", participantes[indices[i]]); 
    }

    for(int i = 0; i < row; i++) 
        free(participantes[i]);

    free(participantes);

    return 0; 
}