#include <stdio.h>
#include <ctype.h>
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
  char texto[60];
  int index[60] = {0};
  int j = 0;

  read_line(texto, 60, stdin);

  for(int i = 0; i < 60; i++){
    texto[i] = tolower(texto[i]);      
  }

  for(int i = 0; i < 60; i++){
    if(texto[i] == ' '){
      index[j] = i + 1;
      j++;
    }    
  }

  texto[0] = toupper(texto[0]);
  
  for(int i = 0; i < j; i++){
    texto[index[i]] = toupper(texto[index[i]]);
  }

  printf("%s", texto);
    
   return 0;
}