#include <stdio.h>

float calcNota(float nota1, float nota2, float nota3){
	float nota_minima;
	float media;
	float aux;

	media = (nota1 + nota2 + nota3)/3;


	// Identifica o menor valor e o armazena em nota3
	if((nota1 < nota2) && (nota1 < nota3)){
		aux = nota1;
		nota1 = nota3;
		nota3 = aux;
	}
	else if((nota2 < nota1) && (nota2 < nota3)){
		aux = nota2;
		nota2 = nota3;
		nota3 = aux;
	}

	// Calcula nota mínima
	nota_minima = 15 - nota1 - nota2;


	// Verifica se o aluno vai para recuperação, e retorna a nota mínima para passar
	if((nota1 >= 3) && (nota2 >= 3) && (nota3 >= 3) && media < 5){
		return nota_minima;
	}
	else{
		return -1;
	}
}

int main(){
	float n1, n2, n3;

	scanf("%f %f %f", &n1, &n2, &n3);

	if(calcNota(n1, n2, n3) == -1){
		printf("Nao faz prova final\n");
	}
	else{
		printf("Final\n");
		printf("%.1f\n", calcNota(n1, n2, n3));
	}

	return 0;
}