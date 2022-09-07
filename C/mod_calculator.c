#include <stdio.h>

int main(){
	int numero1, numero2;
	char op;

	scanf("%d %c %d", &numero1, &op, &numero2); //Inicialização

	do{
		switch(op) {
			case '%': printf("%d\n", numero1 % numero2); break;
			case '/': 
				if(numero2 == 0){
					printf("Erro!\n");
				}
				else{
					printf("%d\n", numero1 / numero2); 
				}
				break;
		}
		scanf("%d %c %d", &numero1, &op, &numero2);	//Atualização
	} while (op != 'F'); // Condição de parada

	return 0;
}