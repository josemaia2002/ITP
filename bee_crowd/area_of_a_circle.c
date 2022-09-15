#include <stdio.h>
#include <math.h>
#define PI 3.14159

// URI 1002

int main() {
    double R, A;
    scanf("%lf", &R);
    A = PI * pow(R, 2);
    printf("A=%.4lf\n", A);

    return 0;
}