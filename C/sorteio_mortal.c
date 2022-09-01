#include <stdio.h>

int main(){
	int heroi;

	scanf("%d", &heroi);

	switch(heroi) {
		case 0: printf("Iron Man"); break;
		case 1: printf("Capitao America"); break;
		case 2: printf("Homem-Aranha"); break;
		case 3: printf("Viuva Negra"); break;
		case 4: printf("Thor"); break;
		case 5: printf("Hulk"); break;
		case 6: printf("Dr. Estranho"); break;
		case 7: printf("Pantera"); break;
		case 8: printf("Hawkeye"); break;
		case 9: printf("GROOT"); break;
		default: printf("Nenhuma vítima selecionada");
	}
}