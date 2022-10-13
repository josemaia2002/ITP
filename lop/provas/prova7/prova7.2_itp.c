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

void countFreq(char sub[], char txt[], int index[], int index_erro[]){
    int M = strlen(sub);
    int N = strlen(txt);
    int res = 0;
    int aux = 0;
    int index_posicoes = 0;
    char resultado[40];
    int parada = 0;
    int size = (int)strlen(sub);

    for (int i = 0; i <= N - M; i++){
        int j;
        parada = 0;
        for (j = 0; j < M; j++){

            if (txt[i+j] != sub[j]){

                if(parada < size){
                    printf("%c não\n", txt[i+j]);
                }
                
                resultado[aux] = txt[i+j];

                index_erro[aux] = j;
                aux++;
                break;
            }
            else{
                
                parada++;
                if(parada == size){
                    printf("%c sim\n", sub[j]);
                    index[index_posicoes] = i;
                    index_posicoes++;
                    res++;
                    break;
                }
                else{
                    printf("%c ", sub[j]);
                }
            }  
          }
          if(parada == size){
            break;
          }
    }

    if(res > 0){
        printf("Achei o padrão no índice %d\n", index[0]);  

        int tam = aux;
    }
    else{
        printf("Não achei o padrão");  
    }
}
   
int main(){
    char txt[40];
    char sub[40];
    int posicoes[40];
    int posicoes_erro[40];

    read_line(txt, 40, stdin);
    read_line(sub, 40, stdin);

    for(int i = 0; i < strlen(txt); i++){
        txt[i] = toupper(txt[i]);
    }

    for(int i = 0; i < strlen(sub); i++){
        sub[i] = toupper(sub[i]);
    }

    countFreq(sub, txt, posicoes, posicoes_erro);
    
    return 0;
}