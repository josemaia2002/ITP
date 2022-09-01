// Code to convert imperial system to metric system
#include <stdio.h>

int main() {
    double height_feet, weight_pound;
    double height_meter, weight_kg;
    // Get height and weight in feet and pound
    printf("Enter the height in feet\n");
    scanf("%lf", &height_feet);
    printf("Enter the weight in pound\n");
    scanf("%lf", &weight_pound);
    // Convert feet to meter and pound to kg
    height_meter = height_feet * 0.3048;
    weight_kg = weight_pound * 0.45359237;
    // Print the result to the user
    printf("The height is: %.2lf and the weight is %.2lf\n", height_meter, weight_kg);

    return 0;
}

