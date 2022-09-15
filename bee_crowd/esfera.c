#include <stdio.h>
#include <math.h>
#define PI 3.14159

// URI 1011

int main() {
    double raio, volume;

    scanf("%lf", &raio);

    volume = (4.0/3) * PI * pow(raio, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}