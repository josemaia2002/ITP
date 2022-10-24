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
	char s[201];
	char p[201];
  char suf[201];

	read_line(s, 200, stdin);
	read_line(p, 200, stdin);
  read_line(suf, 200, stdin);

  size_t s_tam = strlen(s);
  size_t p_tam = strlen(p);
  size_t suf_tam = strlen(suf);


  const char * slice = strncmp(s, p, p_tam) ? s : s + p_tam;
  printf("%s\n", slice);




  
  const char * t = strcmp(s+s_tam-suf_tam, suf) ? s : s+suf_tam+1;
  printf("%s\n", t);

  // s+s_tam-suf_tam


  
/*
	if (strcmp(s+s_tam-suf_tam, suf) == 0) {
    printf("Sufixo\n");
  }
  else{
    printf("Não\n");
  }

  
  
  if (strncmp(s, p, p_tam) == 0) {
    printf("Prefixo\n");
  }
  else{
    printf("Não\n");
  }
 */
	
	return 0;
}