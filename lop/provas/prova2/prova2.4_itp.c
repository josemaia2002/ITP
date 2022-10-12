#include <stdio.h>

int main(){
	int combo, pagamento, troco, diferenca;
	scanf("%d %d", &combo, &pagamento);

	switch(combo) {
		case 1: 
			if(pagamento == 12){
				printf("Deu certim!");

			}
			else if(pagamento > 12){
				troco = pagamento - 12;
				printf("Troco = %d reais", troco);
			}
			else{
				diferenca = 12 - pagamento;
				printf("Saldo insuficiente! Falta %d reais", diferenca);
			}; 
		break;

		case 2: 
			if(pagamento == 23){
				printf("Deu certim!");

			}
			else if(pagamento > 23){
				troco = pagamento - 23;
				printf("Troco = %d reais", troco);
			}
			else{
				diferenca = 23 - pagamento;
				printf("Saldo insuficiente! Falta %d reais", diferenca);
			};
		break;


		case 3: 
			if(pagamento == 31){
				printf("Deu certim!");

			}
			else if(pagamento > 31){
				troco = pagamento - 31;
				printf("Troco = %d reais", troco);
			}
			else{
				diferenca = 31 - pagamento;
				printf("Saldo insuficiente! Falta %d reais", diferenca);
			}; 
		break;


		case 4: 
			if(pagamento == 28){
				printf("Deu certim!");

			}
			else if(pagamento > 28){
				troco = pagamento - 28;
				printf("Troco = %d reais", troco);
			}
			else{
				diferenca = 28 - pagamento;
				printf("Saldo insuficiente! Falta %d reais", diferenca);
			}; 
		break;

		case 5: 
			if(pagamento == 15){
				printf("Deu certim!");

			}
			else if(pagamento > 15){
				troco = pagamento - 15;
				printf("Troco = %d reais", troco);
			}
			else{
				diferenca = 15 - pagamento;
				printf("Saldo insuficiente! Falta %d reais", diferenca);
			}; 
		break;
	}
	return 0;
}