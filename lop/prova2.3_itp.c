#include <stdio.h>

int main(){
	double temperatura, celsius, farenheit, kelvin;
	char escala;
	scanf("%lf %c", &temperatura, &escala);

	if(escala == 'C' || escala == 'c'){
		celsius = temperatura;
		farenheit = celsius * 1.8 + 32;
		kelvin = celsius + 273.15;

		printf("Celsius: %.2lf\n", celsius);
		printf("Farenheit: %.2lf\n", farenheit);
		printf("Kelvin: %.2lf\n", kelvin);

	}
	else if (escala == 'F' || escala == 'f'){
		farenheit = temperatura;
		celsius = (farenheit - 32) / 1.8;		
		kelvin = ((farenheit - 32) / 1.8) + 273.15;

		printf("Celsius: %.2lf\n", celsius);
		printf("Farenheit: %.2lf\n", farenheit);
		printf("Kelvin: %.2lf\n", kelvin);
	}
	else if (escala == 'K' || escala == 'k'){
		kelvin = temperatura;
		celsius = kelvin - 273.15;		
		farenheit = ((kelvin - 273.15) * 1.8) + 32;

		printf("Celsius: %.2lf\n", celsius);
		printf("Farenheit: %.2lf\n", farenheit);
		printf("Kelvin: %.2lf\n", kelvin);
	}
	return 0;
}