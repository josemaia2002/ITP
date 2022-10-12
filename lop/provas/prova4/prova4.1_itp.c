#include <stdio.h>

// Verifica se um retângulo está contido em outro.
void frame(float a_x1, float a_y1, float a_x2, float a_y2, float b_x1, float b_y1, float b_x2, float b_y2){
	if((b_x1 > a_x1 && b_x1 < a_x2) &&				
		(b_y1 > a_y1 && b_y1 < a_y2) &&	
			(b_x2 > a_x1 && b_x2 < a_x2) &&		
				(b_y2 > a_y1 && b_y2 < a_y2)){	
					//printf("B esta contido em A\n");					
					printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", 
						a_x1, a_y1, a_x2, a_y2, b_x1, b_y1, b_x2, b_y2);
						
	}
	else if((a_x1 > b_x1 && a_x1 < b_x2) &&			
		(a_y1 > b_y1 && a_y1 < b_y2) &&			
			(a_x2 > b_x1 && a_x2 < b_x2) &&	
				(a_y2 > b_y1 && a_y2 < b_y2)){	
					//printf("A esta contido em B\n");
					printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", 						
						b_x1, b_y1, b_x2, b_y2, a_x1, a_y1, a_x2, a_y2);									
	}
	else{
		printf("Nao posso afirmar!\n");
	}
}

int main(){
	float x1, y1, x2, y2, x3, y3, x4, y4;
	int stop = 0;

	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

	scanf("%f %f %f %f", &x3, &y3, &x4, &y4);

	while(stop == 0){
		if(x3 == 0 && y3 == 0 && x4 == 0 && y4 == 0){
			stop++;
			break;
		}
		else{						
			frame(x1, y1, x2, y2, x3, y3, x4, y4);
		}
		scanf("%f %f %f %f", &x3, &y3, &x4, &y4);
	}

	return 0;
}