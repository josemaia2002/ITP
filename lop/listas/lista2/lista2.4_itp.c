#include <stdio.h>

int main(){
	int i, anos, anos_invalidos;
	float indice, media;

	i = anos_invalidos = 0;
	indice = media = 0;

	scanf("%d", &anos);

	while(i < anos){
		scanf("%f", &indice);
		if(indice != -1){
			media += indice;
		}
		else{
			anos_invalidos++;
		}
		i++;
	}
	anos -= anos_invalidos;
	media = media / anos;

	if(anos != 0){
		printf("%.2f\n", media);
	}
	else{
		printf("A competicao nao possui dados historicos!\n");
	}

	return 0;
}