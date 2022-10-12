#include <stdio.h>
#include <string.h>

#define TAM 100
#define MAX_TEXTO 101

void carrega_base(int posicao, char base[][MAX_TEXTO]){
    int tamanho;

    fgets(base[posicao], MAX_TEXTO, stdin);

    tamanho = strlen(base[posicao]);

    base[posicao][tamanho-1] = '\0';
}

void atualiza_base(char* str, int posicao, char base[][MAX_TEXTO]){
    int tamanho;

    sprintf(base[posicao], "%s", str);  

    tamanho = strlen(base[posicao]);

    base[posicao][tamanho-1] = '\0';
}

void imprime_base(int tamanho, char base[][MAX_TEXTO]){
    for(int i = 0; i < tamanho; i++){
        printf("%s\n", base[i]);
    }
}

void imprime_sugestoes(char* str, int tamanho, char base[][MAX_TEXTO]){
    int tam_sugestao, sugestoes = 0;

    for(int i = 0; i < tamanho; i++){
        int sugerir = 1;
        int tam_atual = strlen(base[i]);
        tam_sugestao = strlen(str)-1;

        if(tam_atual < tam_sugestao){
            continue;
        }

        for(int j = 0; j < tam_sugestao; j++){
            if(str[j] != base[i][j]){
                sugerir = 0;
                break;
            }
        }

        if(sugerir){
            printf("Você quis dizer: %s?\n", base[i]);
            sugestoes++;
        }
    }
 
    if(sugestoes == 0) printf("Sem recomendações\n");
}

void advanced_search(char* str, int tamanho, char base[][MAX_TEXTO]){
    int sugestoes = 0;
    char* substring;

    for(int i = 0; i < tamanho; i++){
        substring = strstr(base[i], str);
        if(substring != NULL){
            printf("Você quis dizer: %s?\n", base[i]);
            sugestoes++;
        }
    }

    if(sugestoes == 0) {
        printf("Sem recomendações\n");
    }

}

int main() {
    char consultas[TAM][MAX_TEXTO] = {0};
    char string[MAX_TEXTO]; 

    int anteriores, novas;

    scanf("%d\n", &anteriores);

    for(int i = 0; i < anteriores; i++){
        carrega_base(i, consultas);
    }

    int aux = anteriores;

    imprime_base(aux, consultas);

    scanf("%d\n", &novas);

    for(int i = 0; i < novas; i++){
        fgets(string, MAX_TEXTO, stdin);
        atualiza_base(string, aux, consultas);
        
        imprime_sugestoes(string, aux, consultas);
        printf("\n");

        aux++;
    }

    imprime_base(aux, consultas);

    for(int i = 0; i < novas; i++){
        fgets(string, MAX_TEXTO, stdin);
        atualiza_base(string, aux, consultas);
        
        imprime_sugestoes(string, aux, consultas);
        printf("\n");

        aux++;
    }

    printf("\n");
    printf("\n");
    printf("\n");
    
    for(int i = 0; i < novas; i++){
        fgets(string, MAX_TEXTO, stdin);
        advanced_search(string, aux, consultas);
        printf("\n");
    }

    return 0;
}