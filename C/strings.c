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
}