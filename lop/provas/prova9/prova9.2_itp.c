#include <stdio.h>
#include <stdlib.h>
#include <string.h>    
 
typedef struct {
    char nome[51];
    int chapa;
    int votos; 
    int id;
} Party;

int inside(int voto, Party* parties, int num_parties){
    int existe = 0;
    int i;
    for(i = 0; i < num_parties; i++){
        if(voto == parties[i].chapa){
            existe = 1;
            break;
        }
    }
    if(existe == 1){
        return i+1;
    }
    else{
        return 0;
    }
}

float calc_percent(int votes, int votos_validos){
    float percent; 
    percent = 100 * (votes / (float)votos_validos);

    return percent;
}

int compute_votes(int num_votes, int* votes, int num_parties, Party* parties, Party *most_voted, Party *second_most_voted){

    int candidatos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int votos_validos = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < num_votes; j++){
            int indice = inside(votes[j], parties, num_parties);
            if(indice != 0){
                if(candidatos[i] == votes[j]){
                    (parties[indice-1].votos)++;
                    votos_validos++;
                }
            }
        }
    }

    int first = 0;
    int second = 0;

    int max_idx = 0;
    int snd_idx = 0;

    for(int i = 0; i < num_parties; i++){

        if(parties[i].votos > first){   
            first = parties[i].votos;
            max_idx = i;
        }
    } 

    for(int i = 0; i < num_parties; i++){
        if((parties[i].votos > second) && (parties[i].votos < first)){
            second = parties[i].votos;
            snd_idx = i;
        }
    } 

    (*most_voted).chapa = parties[max_idx].chapa; 
    (*most_voted).votos = parties[max_idx].votos;
    strcpy((*most_voted).nome, parties[max_idx].nome); 

    float percent1 = 100 * ((*most_voted).votos / (float)votos_validos);

    (*second_most_voted).chapa = parties[snd_idx].chapa; 
    (*second_most_voted).votos = parties[snd_idx].votos;
    strcpy((*second_most_voted).nome, parties[snd_idx].nome); 

    float percent2 = 100 * ((*second_most_voted).votos / (float)votos_validos);
    
    return votos_validos;
}
    
int main(){
    int* votos;
    float porcentagem;

    int qte_partidos;
    int qte_votos;    

    Party primeiro;
    Party segundo;

    // Alocação dinâmica de partidos
    scanf("%d", &qte_partidos);
    Party* partidos = malloc(qte_partidos * sizeof *partidos); 

    // Preenchimento dos dados dos partidos
    for(int i = 0; i < qte_partidos; i++){
        scanf("%d %s", &partidos[i].chapa, partidos[i].nome);
        partidos[i].id = i;
    }

    // Alocação dinâmica de votos
    scanf("%d", &qte_votos);
    votos = (int*)malloc(qte_votos * sizeof(int));

    // Entrada dos votos
    for(int i = 0; i < qte_votos; i++){
        scanf("%d", votos+i);
    }
  
    int validos = compute_votes(qte_votos, votos, qte_partidos, partidos, &primeiro, &segundo);

    porcentagem =  calc_percent(primeiro.votos, validos);

    printf("VENCEDOR: %s (%d votos = %.2f%%) \n", primeiro.nome, primeiro.votos, porcentagem);

    porcentagem =  calc_percent(segundo.votos, validos);

    printf("VICE: %s (%d votos = %.2f%%) \n", segundo.nome, segundo.votos, porcentagem);

    free(votos);

    return 0;
}