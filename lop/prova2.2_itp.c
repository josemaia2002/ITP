#include <stdio.h>

int main(){
	int quantidade, classe, monstro;
	scanf("%d %d %d", &quantidade, &classe, &monstro);

	switch(monstro) {
		case 1: 
			if((classe >= 2 && quantidade >= 1) || (classe >= 1 && quantidade >= 3)){
				printf("Heróis vencerão!");
			}
			else{
				printf("Melhor chamar Saitama!");
				
			}; 
		break;

		case 2: 
			if((classe >= 3 && quantidade >= 1) || (classe >= 2 && quantidade >= 3)){
				printf("Heróis vencerão!");
			}
			else{
				printf("Melhor chamar Saitama!");
				
			}; 
		break;


		case 3: 
			if((classe >= 4 && quantidade >= 1) || (classe >= 3 && quantidade >= 3)){
				printf("Heróis vencerão!");
			}
			else{
				printf("Melhor chamar Saitama!");
				
			}; 
		break;


		case 4: 
			if((classe == 5 && quantidade >= 1) || (classe >= 4 && quantidade >= 3)){
				printf("Heróis vencerão!");
			}
			else{
				printf("Melhor chamar Saitama!");
				
			}; 
		break;

		case 5: 
			if(classe == 5 && quantidade >= 1){
				printf("Heróis vencerão!");
			}
			else{
				printf("Melhor chamar Saitama!");
				
			}; 
		break;
	}
	return 0;
}