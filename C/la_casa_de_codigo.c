#include <stdio.h>
#include <string.h>

#define TAM 100

typedef struct {
    char nome[TAM][TAM];
    int tam;
} Lista;

int checar_nome(Lista t, char* str) {
    for(int i = 0; i < t.tam; i++) {
        if(strcmp(str, t.nome[i]) == 0){
            return 1;
        }
    }
    return 0;
}

Lista inserir_nome(Lista t, char* str) {
    if(checar_nome(t, str) == 0){
        strcpy(t.nome[t.tam], str);
        t.tam++;
    }

    return t;
}

Lista remover_nome(Lista t, char* str) {
    Lista nova;
    nova.tam = 0;
    if(checar_nome(t, str) == 1){
        for(int i = 0 ; i < t.tam; i++){
            if((strcmp(t.nome[i], str)) != 0){
                strcpy(nova.nome[nova.tam], t.nome[i]);
                nova.tam++;
            }
        }
      t = nova;
    }
    return t;
}

void imprimir_nomes(Lista t){
    printf("Atualmente trabalhando:\n");
    for(int i = 0 ; i < t.tam; i++){
        printf("%s\n", t.nome[i]);
    }
}

int main() {
    int quantidade;
    char nome[TAM];
    char operacao[TAM];
    scanf("%d", &quantidade);

    Lista ativos;           

    ativos.tam = 0;

    for(int i = 0; i < quantidade; i++){
        scanf(" %s", operacao);

        if(strcmp(operacao, "INSERIR") == 0){
            scanf(" %s", nome);
            ativos = inserir_nome(ativos, nome);
        }
        else if(strcmp(operacao, "REMOVER") == 0){
            scanf(" %s", nome);
            ativos = remover_nome(ativos, nome);
        }
        else{
            imprimir_nomes(ativos);
            printf("\n");
        }
    }

    return 0;
}