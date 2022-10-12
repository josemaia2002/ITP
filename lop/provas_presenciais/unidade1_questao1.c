#include <stdio.h>

int calcVerificador(int cv){
	int n;
	n = cv / 10; 
	cv = cv - (10*n);

	return cv;
}

void calcDigitos(int numero, int *vet){
	int unidade, dezena, centena, milhar, dez_milhar, cent_milhar;
	dez_milhar = numero / 10000;
	milhar = (numero - (10000 * dez_milhar)) / 1000;
	centena = ((numero - (10000 * dez_milhar)) - (1000 * milhar)) / 100;
	dezena = (((numero - (10000 * dez_milhar)) - (1000 * milhar)) - (100 * centena)) / 10;
	unidade = (((numero - (10000 * dez_milhar)) - (1000 * milhar)) - (100 * centena)) - (10 * dezena);

	vet[0] = dez_milhar;
	vet[1] = milhar;
	vet[2] = centena;
	vet[3] = dezena;
	vet[4] = unidade;
}

int main(){
	int identificador[5];
	int identEntrada;
	int verificador;
	int primos[] = {11, 7, 5, 3, 2};
	int soma = 0;

	// Preencher identificador
	scanf("%d-%d", &identEntrada, &verificador);

	calcDigitos(identEntrada, identificador);


	for(int i = 0; i < 5; i++){
		soma = soma + (identificador[i] * primos[i]);
	}	

	//printf("%d\n", soma);

	//printf("%d\n", calcVerificador(soma));

	//printf("%d\n", verificador);
	

	if(calcVerificador(soma) == verificador){
		printf("CORRETO\n");
	}
	else{
		printf("ERRADO\n");
	}
	return 0;
}