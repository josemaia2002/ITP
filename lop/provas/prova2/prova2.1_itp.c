#include <stdio.h>

int main(){
	int numero, unidade, dezena, centena, milhar, dez_milhar, cent_milhar;
	scanf("%d", &numero);

	if(numero < 10){
		unidade = numero;

		printf("%d \n", unidade);
	}
	else if (numero < 100){
		//centena = numero / 100;
		dezena = numero / 10;
		unidade = numero - (10 * dezena);

		//printf("%d \n", centena);
		printf("%d \n", dezena);
		printf("%d \n", unidade);
	}
	else if (numero >= 100 && numero < 1000){
		centena = numero / 100;
		dezena = (numero - (100 * centena)) / 10;
		unidade = (numero - (100 * centena)) - 10 * dezena;

		printf("%d \n", centena);
		printf("%d \n", dezena);
		printf("%d \n", unidade);
	}
	else if (numero >= 1000 && numero < 10000){
		milhar = numero / 1000;
		centena = (numero - (1000 * milhar)) / 100;
		dezena = ((numero - (1000 * milhar)) - (100 * centena)) / 10;
		unidade = ((numero - (1000 * milhar)) - (100 * centena)) - (10 * dezena);

		printf("%d \n", milhar);
		printf("%d \n", centena);
		printf("%d \n", dezena);
		printf("%d \n", unidade);
	}
	else if (numero >= 10000 && numero < 100000){
		dez_milhar = numero / 10000;
		milhar = (numero - (10000 * dez_milhar)) / 1000;
		centena = ((numero - (10000 * dez_milhar)) - (1000 * milhar)) / 100;
		dezena = (((numero - (10000 * dez_milhar)) - (1000 * milhar)) - (100 * centena)) / 10;
		unidade = (((numero - (10000 * dez_milhar)) - (1000 * milhar)) - (100 * centena)) - (10 * dezena);

		printf("%d \n", dez_milhar);
		printf("%d \n", milhar);
		printf("%d \n", centena);
		printf("%d \n", dezena);
		printf("%d \n", unidade);
	}
	else{
		cent_milhar = numero / 100000;

		printf("%d \n", cent_milhar);
		printf("0 \n");
		printf("0 \n");
		printf("0 \n");
		printf("0 \n");
		printf("0 \n");
	}
	return 0;
}