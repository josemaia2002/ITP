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
    char nome[201];
    int vitorias;
    int empates;
    int derrotas;
    int gols_marcados;
    int gols_sofridos;
    int pontos;
    int partidas;
    int saldo;
    int id;
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
            if (grupo[j].pontos > grupo[min_idx].pontos){
                min_idx = j;
            }
            else if(grupo[j].pontos == grupo[min_idx].pontos){
                if(grupo[j].vitorias > grupo[min_idx].vitorias){
                    min_idx = j;
                }
                else if(grupo[j].vitorias == grupo[min_idx].vitorias){
                    if(grupo[j].saldo > grupo[min_idx].saldo){
                        min_idx = j;
                    }
                }
            }
        }
        swap(&grupo[min_idx].vitorias, &grupo[i].vitorias); //vitorias
        swap(&grupo[min_idx].empates, &grupo[i].empates); //empates
        swap(&grupo[min_idx].derrotas, &grupo[i].derrotas); //derrotas
        swap(&grupo[min_idx].gols_marcados, &grupo[i].gols_marcados); //gols_marcados
        swap(&grupo[min_idx].gols_sofridos, &grupo[i].gols_sofridos); //gols_sofridos

        swap(&grupo[min_idx].pontos, &grupo[i].pontos); //pontos
        swap(&grupo[min_idx].partidas, &grupo[i].partidas); //partidas
        swap(&grupo[min_idx].saldo, &grupo[i].saldo); //saldo

        swap(&grupo[min_idx].id, &grupo[i].id); //id
        string_swap(grupo[min_idx].nome, grupo[i].nome); //nome
    }
}
   
// Function to print an array
void printArray(Time* grupo, int size){
    int i;

    printf("Tabela do campeonato:\n"); 
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");  

    for (i = 0; i < size; i++){
        printf("%s", grupo[i].nome);
        printf("| %d", grupo[i].pontos);
        printf("| %d", grupo[i].partidas);
        printf("| %d", grupo[i].vitorias);
        printf("| %d", grupo[i].empates);
        printf("| %d", grupo[i].derrotas);
        printf("| %d", grupo[i].gols_marcados);
        printf("| %d", grupo[i].gols_sofridos);
        printf("| %d", grupo[i].saldo);

        printf("\n");
    }
    printf("\n");

    printf("Times na zona da libertadores:\n");
    printf("%s\n", grupo[0].nome);
    printf("%s\n", grupo[1].nome);
    printf("%s\n", grupo[2].nome);
    printf("%s\n", grupo[3].nome);
    printf("%s\n", grupo[4].nome);
    printf("%s\n", grupo[5].nome);
    
    printf("\n");

    printf("Times rebaixados: \n");
    printf("%s\n", grupo[size-1].nome);
    printf("%s\n", grupo[size-2].nome);
    printf("%s\n", grupo[size-3].nome);
    printf("%s\n", grupo[size-4].nome);
}

// Driver code
int main(){
    char entrada[251]; // Entrada de dados do usuário

    int quantidade; // Quantidade de times
    int indice; // Índice do time com mais gols 
    
    scanf("%d", &quantidade);

    Time times[quantidade]; // Vetor de structs

    // Preenchimento do vetor de structs
    for(int i = 0; i < quantidade; i++){
        read_line(entrada, 251, stdin);
        sscanf(entrada, "%[^;]; %d %d %d %d %d", times[i].nome, &times[i].vitorias, &times[i].empates, &times[i].derrotas, &times[i].gols_marcados, &times[i].gols_sofridos);
        times[i].id = i;
        times[i].pontos =  (3*(times[i].vitorias)) + (1*(times[i].empates));         
        times[i].partidas = (times[i].vitorias) + (times[i].empates) + (times[i].derrotas);
        times[i].saldo = (times[i].gols_marcados) - (times[i].gols_sofridos);
    } 

    int n = quantidade;
    // Ordenamento do vetor                   
    selectionSort(times, n);

    // Impressão do vetor de structs
    printArray(times, n);
 
    return 0;
}