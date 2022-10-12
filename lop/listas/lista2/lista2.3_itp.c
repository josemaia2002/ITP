#include <stdio.h>
#include <math.h>

int main(){
	double custo, custo_total;
	int quantidade, quantidade_total;

	custo_total = quantidade_total = 0;

	scanf("%d %lf", &quantidade, &custo); //Inicialização

	while(quantidade != -1){
		custo_total += quantidade * custo;
		quantidade_total += quantidade;
		scanf("%d", &quantidade);	//Atualização

		if(quantidade == -1){
			break;
		}

		scanf("%lf", &custo);
	}

	printf("%d %.2lf\n", quantidade_total, custo_total);

	return 0;
} 