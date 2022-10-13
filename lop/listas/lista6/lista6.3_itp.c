#include <stdio.h>
#include <string.h>
#include <ctype.h>

void read_line(char linha[], int tam, FILE* f){
    fgets(linha, tam, f);
    while(linha[0] == '\n'){
        fgets(linha, tam , f);
    }
    if(linha[strlen(linha)-1] == '\n'){
        linha[strlen(linha)-1] = '\0';
    }
}

void countFreq(char sub[], char txt[], int index[]){
    int M = strlen(sub);
    int N = strlen(txt);
    int res = 0;
    int aux = 0;
   
    for (int i = 0; i <= N - M; i++){
        int j;
        for (j = 0; j < M; j++){
            if (txt[i+j] != sub[j]){
                break;
            }  
          }
        if (j == M){
            index[aux] = i;
            aux++;
            res++;
        }
    }

    if(res > 0){
        printf("Repetições: %d\n", res);
        printf("Posições: ");
        for(int i = 0; i < res; i++){
            printf("%d ", index[i]);
        }   
    }
    else{
        printf("Repetições: %d\n", res);
    }
}
   
int main(){
    char txt[40];
    char sub[40];
    int posicoes[40];

    read_line(sub, 40, stdin);
    read_line(txt, 40, stdin);

    for(int i = 0; i < strlen(txt); i++){
        txt[i] = tolower(txt[i]);
    }

    for(int i = 0; i < strlen(sub); i++){
        sub[i] = tolower(sub[i]);
    }

    countFreq(sub, txt, posicoes);
    
    return 0;
}