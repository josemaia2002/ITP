#include <stdio.h>
#include <math.h>

// URI 1015

int main() {
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = pow((pow((x2-x1), 2) + pow((y2-y1), 2)), 0.5);

    printf("%.4lf\n", distancia);

    return 0;
}