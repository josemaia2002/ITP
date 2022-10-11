#include <stdio.h>
#include <string.h>

int main(){
	char texto[100];
	char secret[100];
	char key[10];
	char encrypt[100];
	int count = 0;

	const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' ', '\0'};

	fgets(texto, 99, stdin);
	fgets(key, 10, stdin);

	printf("%s",strstr(texto, S));



	return 0;
}