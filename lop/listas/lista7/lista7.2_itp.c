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

struct Item {
	char nome[41];
	float preco;
	int quantidade;
};

int main() {
	int parada = 1;
	int quantidade = 0;
	int participantes;
	float valor = 0; 
	float rateio = 0;

	struct Item it[100];

	for(int i = 0; i < 100; i++){
	    read_line(it[i].nome, 41, stdin);
	    scanf("%f", &it[i].preco);
	    scanf("%d", &it[i].quantidade);
	    scanf("%d", &parada);
	    quantidade++;
    	if(parada == 2){
      		break;
    	}
  	} 

  	scanf("%d", &participantes);

  	for(int i = 0; i < quantidade; i++){
    	valor += it[i].preco * it[i].quantidade;
  	}	  

	rateio = valor/participantes;

	printf("Valor: R$ %.2f\n", valor);
	printf("Divisão R$ %.2f para cada participante.\n", rateio);

	return 0;
}