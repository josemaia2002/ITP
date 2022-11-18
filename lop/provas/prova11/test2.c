#include <stdio.h>
#include <stdbool.h>

#define N 7

void print(int arr[N][N]){
    printf("\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}

int path(int arr[N][N], int x, int y, char direcao){
    // Verifica o espaço a direita
    if(direcao == 'D'){
        if((arr[x][y+1] == 1) && (y != 6)){
            return 1;   
        }
        else{
            return 0;
        }
    }
    // Verifica o espaço a esquerda
    else if(direcao == 'E'){
        if((arr[x][y-1] == 1) && (y != 0)){
            return 1;   
        }
        else{
            return 0;
        }
    }
    // Verifica o espaço acima
    else if(direcao == 'C'){
        if((arr[x-1][y] == 1) && (x != 0)){
            return 1;   
        }
        else{
            return 0;
        }
    }
    // Verifica o espaço abaixo
    else if(direcao == 'B'){
        if((arr[x+1][y] == 1) && (x != 6)){
            return 1;   
        }
        else{
            return 0;
        }
    }
}

int finder(int arr[N][N], int x, int y){
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
    char grid[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf(" %c", &grid[i][j]);
        }
    }

    int inteiros[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            inteiros[i][j] = (int)grid[i][j] - 48;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(inteiros[i][j] == -2){
                inteiros[i][j] = 1;
            }
            else if(inteiros[i][j] == 19){
                inteiros[i][j] = 7;
            }
            else{
                inteiros[i][j] = 0;
            }
        }
    }

    printf("\n%d\n", finder(inteiros, 2, 2));

    print(inteiros);

    return 0;
}