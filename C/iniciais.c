#include<stdio.h>
#include<ctype.h>
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

void upper_first(char vet[60], int tam, char new_vet[60]){
	for(int i = 0; i < tam; i++){
		
	}
}

int main(){
	char palavra[60];
	char new_string[60];

	// Preencher vetor de strings
	for(int i = 0; i < N; i++){
		read_line(palavra, 60, stdin);
	}

	return 0;
}
*/

/*

#include<stdio.h>
#include <string.h>

int main(){
  char texto[] = "André Atacante mil gols";
  char vetor[60][200];
  char* pedaco;

  pedaco = strtok(texto, " ");

  int i = 0;

  while(pedaco != NULL){
    sprintf(vetor[i], "%s", pedaco);
    printf("%s\n", pedaco);

    pedaco = strtok(NULL, " ");
    i++;
  }
    printf("\n");
  
    printf("%c\n", vetor[0][0]);
    printf("%c\n", vetor[1][0]);
    printf("%c\n", vetor[2][0]);
    printf("%c\n", vetor[3][0]);
  

  return 0;
}


*/



/*

#include<stdio.h>
#include<ctype.h>
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
  char texto[] = "André Atacante mil gols";
  char vetor[60][200];
  char* pedaco;

  pedaco = strtok(texto, " ");

  int i = 0;

  while(pedaco != NULL){
    sprintf(vetor[i], "%s", pedaco);
    printf("%s\n", pedaco);

    pedaco = strtok(NULL, " ");
    i++;
  }
    printf("\n");
  
    vetor[0][0] = toupper(vetor[0][0]);
    vetor[1][0] = toupper(vetor[1][0]);
    vetor[2][0] = toupper(vetor[2][0]);
    vetor[3][0] = toupper(vetor[3][0]);

    strcat(vetor[0], vetor[1]);
    strcat(vetor[0], vetor[2]);
    strcat(vetor[0], vetor[3]);

    printf("%s\n", vetor[0]);
    

   return 0;
}

*/