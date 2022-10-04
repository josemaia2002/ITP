#include <stdio.h>

int main(){
	float tempo_maximo, tempo;
	int competidores, series;
	competidores = series = 0;

	scanf("%f", &tempo_maximo);
	scanf("%f", &tempo);

	while(tempo != -1) {  		
		if(tempo <= tempo_maximo){
			competidores++;
		}	
		scanf("%f", &tempo);
	}

	if((competidores % 8) == 0){
		series = competidores / 8;
	}
	else{
		series = (competidores / 8) + 1;
	}

	printf("%d %d", competidores, series);
	return 0;
}