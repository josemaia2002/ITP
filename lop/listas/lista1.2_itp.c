#include <stdio.h>

int main(){
	int x1, y1, x2, y2, px, py;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d", &px, &py);	

	if ((px >= x1 && px <= x2) && (py >= y1 && py <= y2)){
		printf("Dentro!\n");
	}
	else{
		printf("Fora!\n");
	}
	return 0;
}