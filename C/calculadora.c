#include <stdio.h>

int main(){
	float numero1, numero2;
	char op;

	scanf("%f %c %f", &numero1, &op, &numero2); //Inicialização

	do{
		switch(op) {
			case '+': printf("%.2f\n", numero1 + numero2); break;
			case '-': printf("%.2f\n", numero1 - numero2); break;
			case '*': printf("%.2f\n", numero1 * numero2); break;
			case '/': 
				if(numero2 == 0){
					printf("Erro!\n");
				}
				else{
					printf("%.2f\n", numero1 / numero2); 
				}
				break;
		}
		scanf("%f %c %f", &numero1, &op, &numero2);	//Atualização
	} while (op != 'F'); // Condição de parada

	return 0;
}