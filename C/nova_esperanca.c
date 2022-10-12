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

void encrypt(char P[], int k){
  const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};


  int index[201];
  int indice;
  int key[4];
  key[0] = k/1000;
  key[1] = (k - (key[0]*1000))/100;
  key[2] = (k - (key[0]*1000) - (key[1]*100))/10;
  key[3] = k - (key[0]*1000) - (key[1]*100) - (key[2]*10);

  int message_tam = (int)strlen(P);


  for(int i = 0; i < message_tam; i++){
    for(int j = 0; j < 40; j++){
      if(P[i] == S[j]){
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
    P[i] = S[indice];
    aux++;
  }

  for(int i = 0; i < message_tam; i++){
    printf("%c", P[i]);
  }
}

int verifica_char(char P[]){
  const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};

  int message_tam = (int)strlen(P); 
  int contador = 0;  

  for(int i = 0; i < message_tam; i++){
    for(int j = 0; j < 40; j++){
      if(P[i] == S[j]){
        contador++;
      }
    }
  }
  if(contador != message_tam){
    return 0;
  }
  else{
    return 1;
  }
}



int main(){
	char message[201];
  int chave;

	scanf("%d", &chave);
  read_line(message, 200, stdin);

  verifica_char(message);

  if(chave > 9999){
    printf("Chave invalida!\n");
  }
  else if(verifica_char(message) == 0){
    printf("Caractere invalido na entrada!\n");
  }
  else{
    encrypt(message, chave);
  }

	return 0;
}



/*

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
}

*/