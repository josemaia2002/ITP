#include <stdio.h>

// URI 1008

int main(){
	int funcionario, horas_trabalhadas;
	double pagamento_hora, salario;

	scanf("%d", &funcionario);
	scanf("%d", &horas_trabalhadas);
	scanf("%lf", &pagamento_hora);

	salario = horas_trabalhadas * pagamento_hora;

	printf("NUMBER = %d\n", funcionario);
	printf("SALARY = U$ %.2lf\n", salario);

	return 0;
}