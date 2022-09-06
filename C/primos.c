#include <stdio.h>

int main(){
	int i, minimo, maximo, count;

	scanf("%d %d", &minimo, & maximo);

	for (i = minimo; i <= maximo; ++i){
		count = 0;
		for (int j = 1; j <= i; ++j){
			if (i%j == 0){
				count++;
			}
		}
		if (count == 2){
			printf("%d\n", i);
		}
	}
	return 0;
}