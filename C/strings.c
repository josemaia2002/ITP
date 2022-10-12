#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
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
=======
void read_line(char linha[], int tam, FILE* f){
	fgets(linha, tam, f);
	while(linha[0] == '\n'){
		fgets(linha, tam , f);
	}
	if(linha[strlen(linha)-1] == '\n'){
		linha[strlen(linha)-1] = '\0';
	}
}

int main(){
	char texto[200];
	char secret[200];
	int k;
	int key[4];
	char encrypt[200];
	int count = 0;
	
	scanf("%d", &k);

	key[0] = k/1000;
	key[1] = (k - (key[0]*1000))/100;
	key[2] = (k - (key[0]*1000) - (key[1]*100))/10;
	key[3] = k - (key[0]*1000) - (key[1]*100) - (key[2]*10);

	const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};

    
    printf("%s\n", S);
    
    int indice = 38 + key[1];

    if(indice > 40){
      indice = indice - 40;
    }
    
    printf("%c\n", S[indice]);

	return 0;
}


// __________________________________________________


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

int main(){
	char message[201];
	char encrypted[201];
  int index[201];
  int indice;

  int k;
	int key[4];

	scanf("%d", &k);

	key[0] = k/1000;
	key[1] = (k - (key[0]*1000))/100;
	key[2] = (k - (key[0]*1000) - (key[1]*100))/10;
	key[3] = k - (key[0]*1000) - (key[1]*100) - (key[2]*10);

  const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};

  read_line(message, 200, stdin);

  int message_tam = (int)strlen(message);

  for(int i = 0; i < message_tam; i++){
    for(int j = 0; j < 40; j++){
      if(message[i] == S[j]){
        index[i] = j;
      }
    }
  }

  for(int i = 0; i < message_tam; i++){
  	indice = key[i] + index[i];
  	if(indice > 40){
      indice = indice - 40;
    }
    encrypted[i] = S[indice];
  }


  printf("%s", encrypted);

	return 0;
}






//________________________________________


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

int main(){
	char message[201];
	char encrypted[201];
  int index[201];
  int indice;

  int k;
	int key[4];

	scanf("%d", &k);

	key[0] = k/1000;
	key[1] = (k - (key[0]*1000))/100;
	key[2] = (k - (key[0]*1000) - (key[1]*100))/10;
	key[3] = k - (key[0]*1000) - (key[1]*100) - (key[2]*10);

  const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};

  read_line(message, 200, stdin);

  int message_tam = (int)strlen(message);

  for(int i = 0; i < message_tam; i++){
    for(int j = 0; j < 40; j++){
      if(message[i] == S[j]){
        index[i] = j;
      }
    }
  }

  int aux = 0;
    
  for(int i = 0; i < message_tam; i++){
    if(aux > 3){
      aux = aux - 4;
    }
  	indice = key[aux] + index[i];
  	if(indice > 39){
      indice = indice - 40;
    }
    encrypted[i] = S[indice];
    aux++;
  }

  for(int i = 0; i < message_tam; i++){
  	printf("%c", encrypted[i]);
  }

	return 0;
>>>>>>> 54e77de74634fd99e5f0aff90292c5bd46196cd4
}