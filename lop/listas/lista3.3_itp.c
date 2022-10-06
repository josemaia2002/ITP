#include <stdio.h>

int velocidade_relativa(int velocidade1, int velocidade2){
	int v_rel; 
	v_rel = velocidade1 - velocidade2;

	return v_rel;
}

int calc_tempo(int distancia, int velocidade){
	int tempo;
	tempo = distancia / velocidade;

	return tempo;
}

int main(){
	int x, v1, v2;

	scanf("%d %d %d", &x, &v1 , &v2);

	if(v1 > v2){
		printf("%ds\n", calc_tempo(x, velocidade_relativa(v1, v2)));

	}
	else{
		printf("impossivel\n");
	}
		
	return 0;
}