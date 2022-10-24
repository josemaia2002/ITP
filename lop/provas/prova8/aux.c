#include <stdio.h>
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

typedef struct {
    char nome[51];
    int gols_marcados;
    int gols_sofridos;
} Time;
 
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void string_swap(char* str1, char* str2){
    char aux_str[51];
    strcpy(aux_str, str1);
    strcpy(str1, str2);
    strcpy(str2, aux_str);
}

void selectionSort(Time* grupo, int n){
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if (grupo[j].gols_marcados < grupo[min_idx].gols_marcados){
                min_idx = j;
            }
            else if(grupo[j].gols_marcados == grupo[min_idx].gols_marcados){
                if((grupo[j].gols_marcados - grupo[j].gols_sofridos) < (grupo[min_idx].gols_marcados - grupo[min_idx].gols_sofridos)){
                    min_idx = j;
                }
            }
        }
        swap(&grupo[min_idx].gols_marcados, &grupo[i].gols_marcados);
        swap(&grupo[min_idx].gols_sofridos, &grupo[i].gols_sofridos);
        string_swap(grupo[min_idx].nome, grupo[i].nome);
    }
}
   
// Function to print an array
void printArray(Time* grupo, int size){
    int i;
    int colocacao = 1;
    for (i = size-1; i >= 0; i--){
        printf("%d - %s\n", colocacao, grupo[i].nome);
        printf("Gols marcados: %d\n", grupo[i].gols_marcados);
        printf("Gols sofridos: %d\n", grupo[i].gols_sofridos);
        colocacao++;
    }
    printf("\n");
}

// Driver code
int main(){
    int quantidade; // Quantidade de times
    int indice; // Índice do time com mais gols 
    
    scanf("%d", &quantidade);

    Time times[quantidade]; // Vetor de structs


    // Preenchimento do vetor de structs
    for(int i = 0; i < quantidade; i++){
        read_line(times[i].nome, 51, stdin);
        scanf("%d", &times[i].gols_marcados);
        scanf("%d", &times[i].gols_sofridos);
    } 

    //imprimir(times, quantidade);
    //printf("%d\n", maior(times, quantidade, &indice));
    //printf("%d", indice);

    int n = quantidade;
    // Ordenamento do vetor                   
    selectionSort(times, n);

    // Impressão do vetor de structs
    printArray(times, n);
 
    return 0;
}