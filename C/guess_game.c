#include <stdio.h>
#include <stdlib.h>

int main(){
	int guess, sorted_number, chances = 10;
	srand(time(NULL));
	sorted_number = rand() % 100;

	scanf("%d", &guess);

	while(guess != sorted_number && chances > 1){
		if(guess < sorted_number){
			printf("Too low!\n");
		}
		else{
			printf("Too high!\n");
		}
		scanf("%d", &guess);
		chances--;
	}
	if(guess == sorted_number){
		printf("You win!\n");
	}	
	else{
		printf("You lose!\n");
	}

	return 0;
}

