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
    char modelo[51];
    int memoria;
    float processador;
    float camera;    
    float bateria;
} Smartphone;

void imprimir(Smartphone* phones, int indice){
    printf("Modelo: %s\n", phones[indice].modelo);
    printf("Memoria: %dGB\n", phones[indice].memoria);
    printf("Processador: %.2fGhz\n", phones[indice].processador);
    printf("Camera: %.2fMPixels\n", phones[indice].camera);
    printf("Bateria: %.2fmA\n", phones[indice].bateria);

    printf("\n");
}

int pesquisaSmartphone(int qnt_cadastrada, Smartphone* phones, Smartphone reqMin){
    int qnt_encontrada = 0;

    // Peenchimento da stuct reqMin
    scanf("%d %f %f %f", &reqMin.memoria, &reqMin.processador, &reqMin.camera, &reqMin.bateria);

    for(int i = 0; i < qnt_cadastrada; i++) {
        if((phones[i].memoria >= reqMin.memoria) && (phones[i].processador >= reqMin.processador) && (phones[i].camera >= reqMin.camera) && (phones[i].bateria >= reqMin.bateria)){

            imprimir(phones, i);

            qnt_encontrada++;
        }
    }

    if(qnt_encontrada > 0){
        return qnt_encontrada;
    }
    else{
        return 0;
    }
}

int cadastraSmartphone(int qnt_cadastrada, Smartphone* phones){
    int ctrl = qnt_cadastrada;

    // Entrada de dados
    read_line(phones[ctrl].modelo, 40, stdin);
    scanf("%d %f %f %f", &phones[ctrl].memoria, &phones[ctrl].processador, &phones[ctrl].camera, &phones[ctrl].bateria);

    ctrl++; // Incremento da quantidade de smartphones

    return ctrl;

}

int main() {
    Smartphone phones[TAM]; // Vetor de structs
    Smartphone reqMin; // Struct com os requisitos mínimos

    // Implementação do loop
    int ctrl = 0; // variável para controle de cadastraSmartphone()

    char comando;
    scanf(" %c", &comando); // inicialização

    while(comando != 'n'){ 
        cadastraSmartphone(ctrl, phones);
        ctrl++; // Incremento do indíce do vetor
        scanf(" %c", &comando); // atualização
    }

    int encontrados = pesquisaSmartphone(ctrl, phones, reqMin);
    
    printf("%d smartphones encontrados.\n", encontrados);

    return 0;
}