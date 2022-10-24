#include <stdio.h>
#include <string.h>

#define TAM 500

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
    int idade;
    char sexo;
} Pessoa;

int checar(Pessoa* grupo, Pessoa p) {
    for(int i = 0; i < TAM; i++) {
        if((strcmp(p.nome, grupo[i].nome) == 0) && (grupo[i].idade == p.idade) && (grupo[i].sexo == p.sexo)){
            return i+1;
        }
    }
    return 0;
}

Pessoa criar(char* name, int age, char gender){
    Pessoa p1;
    strcpy(p1.nome, name);      
    p1.idade = age;     
    p1.sexo = gender;

    return p1;
}

void inserir(Pessoa* grupo, Pessoa p, int indice){

    strcpy(grupo[indice].nome, p.nome);               
    grupo[indice].idade = p.idade;
    grupo[indice].sexo = p.sexo;
}


void deletar(Pessoa p, Pessoa* grupo, int size){
    int indice;
    indice = checar(grupo, p);
    
    if(checar(grupo, p) != 0){
        for(int i = indice-1; i < size; i++){
            strcpy(grupo[i].nome, grupo[i+1].nome);
            grupo[i].idade = grupo[i+1].idade;
            grupo[i].sexo = grupo[i+1].sexo;
        }
    }
}

void imprimir(Pessoa* grupo, int tam){
    for(int i = 0; i < 100; i++){
        if((grupo[i].sexo == 'F') || (grupo[i].sexo == 'M') || (grupo[i].sexo == 'N')){
            printf("%s,%d,%c\n", grupo[i].nome, grupo[i].idade, grupo[i].sexo);
        }
    }
}

int main() {
    Pessoa p;
    char nome_in[51];
    int idade_in;
    char sexo_in;

    Pessoa grupo[TAM]; // Vetor de structs

    // Implementação do loop
    int control_var = 0; // variável para o indice de inserir()

    char comando;
    scanf(" %c", &comando); // inicialização

    while(comando != 'p'){ 
        // Entrada de dados
        read_line(nome_in, 51, stdin);
        scanf("%d", &idade_in);
        scanf(" %c", &sexo_in);

        // Criação da struct com os dados recebidos
        p = criar(nome_in, idade_in, sexo_in);

        if(comando == 'i'){
            // Inserindo struct no vetor de structs 
            inserir(grupo, p, control_var);
            control_var++;
        }
        else if(comando == 'd'){
            // Removendo struct do vetor de structs
            //Pessoa novo_grupo[5];   
            deletar(p, grupo, control_var);
            //control_var--;
        }
        scanf(" %c", &comando); // atualização
    }
    
    // Lendo as structs
    imprimir(grupo, control_var);

    return 0;
}