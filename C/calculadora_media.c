#include <stdio.h>

int main(){
	double nota1, nota2, nota3, media, reposicao;
	printf("Digite as 3 notas\n");
	scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("Media = %.2lf\n", media);

	if(media >= 7.0){
		printf("Aprovado!\n");
	}
	else if(media < 3.0){
		printf("Reprovado!\n");
	}
	else if(media >= 5.0 && media < 7.0 && nota1 >= 3.0 && nota2 >= 3.0 && nota3 >= 3.0){
		printf("Aprovado por nota!\n");
	}
	else{
		printf("Reposicao\n");
		printf("Digite a nota da reposicao\n");
		scanf("%lf", &reposicao);

		if (reposicao > nota1 && nota1 <= nota2 && nota1 <= nota3){
			media = (reposicao + nota2 + nota3) / 3;
		}
		else if(reposicao > nota2 && nota2 <= nota1 && nota2 <= nota3){
			media = (reposicao + nota1 + nota3) / 3;
		}
		else if(reposicao > nota3 && nota3 <= nota1 && nota3 <= nota2){
			media = (reposicao + nota1 + nota2) / 3;
		}
		else{
			printf("Reprovado!\n");
		}
		printf("Media = %.2lf\n", media);

		if(media >= 7.0){
			printf("Aprovado!\n");
		}
		else if(media < 3.0){
			printf("Reprovado!\n");
		}
		else if(media >= 5.0 && media < 7.0 && reposicao >= 3.0){
			printf("Aprovado por nota!\n");
		}
		else{
			printf("Reprovado!\n");
		}
	}
	return 0;
}