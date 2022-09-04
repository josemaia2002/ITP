#include <stdio.h>

int main(){
	int dias, meses, anos;
	scanf("%d", &dias);

	if (dias < 30){
		printf("0 ano(s)\n");
		printf("0 mes(es)\n");
		printf("%d dia(s)\n", dias);
	}
	else if(dias >= 30 && dias < 365){
		meses = dias / 30;
		dias = dias % 30;
		printf("0 ano(s)\n");
		printf("%d mes(es)\n", meses);
		printf("%d dia(s)\n", dias);
	}
	else{
		anos = dias / 365;
	  	meses = (dias - 365 * anos) / 30;
    	dias = (dias - 365 * anos) % 30;
		printf("%d ano(s)\n", anos);
		printf("%d mes(es)\n", meses);
		printf("%d dia(s)\n", dias);
	}
	return 0;
}