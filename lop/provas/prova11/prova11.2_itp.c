// Stable


#include <stdio.h>
#include <stdlib.h>

// Preenchimento do cenário 
void assign(char** arr, int m, int n){
    char bloco;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf(" %c", &bloco);
            arr[i][j] = bloco;
        }
    }    
}

int path(char** arr, int x, int y, char direcao){
    // Verifica o espaço a direita
    if(direcao == 'D'){
        if((arr[x][y+1] == '.') && (y != 6)){
            return 1;   
        }
        else{
            return 0;
        }
    }
    // Verifica o espaço a esquerda
    else if(direcao == 'E'){
        if((arr[x][y-1] == '.') && (y != 0)){
            return 1;   
        }
        else{
            return 0;
        }
    }
    // Verifica o espaço acima
    else if(direcao == 'C'){
        if((arr[x-1][y] == '.') && (x != 0)){
            return 1;   
        }
        else{
            return 0;
        }
    }
    // Verifica o espaço abaixo
    else if(direcao == 'B'){
        if((arr[x+1][y] == '.') && (x != 6)){
            return 1;   
        }
        else{
            return 0;
        }
    }
}

int finder(char** arr, int x, int y){
    int count = 0;
    if(path(arr, x, y, 'D') == 1){
        count++;
    }

    if(path(arr, x, y, 'E') == 1){
        count++;
    }

    if(path(arr, x, y, 'C') == 1){
        count++;
    }

    if(path(arr, x, y, 'B') == 1){
        count++;
    }

    if(count > 0){
        return count;
    }
    else{
        return 0;
    }
}
 
int main(){
    int m = 7;
    int n = 7;
    int x, y;
 
    // Alocação de memória para a matriz
    char **arr = (char **)malloc(m * sizeof(char *));
    for(char r = 0; r < m; r++){
        arr[r] = (char *)malloc(n * sizeof(char));
    }

    assign(arr, m, n);

    // Localiza o jogador
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'C'){
                x = i;
                y = j;
            }
        }
    }

    printf("%d\n", finder(arr, x, y)); 
    
    // Impressão do cenário
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória
    for(int i = 0; i < m; i++){
        free(arr[i]);
    }
    free(arr);  
 
    return 0;
} 



/*
TESTE

*******
M..*..*
*...M.*
*..M..*
C....P*
**..*.*
*******


printf("%d\n", path(arr, 4, 3, 'D'));
printf("%d\n", path(arr, 4, 3, 'E'));
printf("%d\n", path(arr, 4, 3, 'C'));
printf("%d\n", path(arr, 4, 3, 'B'));

printf("\n");



*/
