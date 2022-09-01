#include <stdio.h>

int main(){
	int thor, starlord, spider;

	scanf("%d %d %d", &thor, &starlord, &spider);

	if(thor == starlord && thor == spider){
		printf("Draw!\n");
	}
	else if(thor != starlord && thor != spider){
		printf("Thor!\n");
	}
	else if(starlord != thor && starlord != spider){
		printf("Starlord!\n");
	}
	else{
		printf("Spiderman!\n");
	}

	return 0;
}