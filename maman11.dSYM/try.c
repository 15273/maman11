//
// Created by מנחם מנדל קליש on 06/12/2023.
//
#include <stdio.h>

double my_cos(double x) {
    double result = 1.0; // Start with the first term in the series
    double term = 1.0;
    double x_squared = x * x;
    int i;
    for (i = 2; term > 0.000001; i += 2) {
        term *= -x_squared / ((i - 1) * i);
        result += term;
    }
    return result;
}

int main() {
    double angle;
    printf("Enter an angle in radians: ");
    scanf("%lf", &angle);

    double cosine = my_cos(angle);
    printf("Cosine calculated by your function: %.8f\n", cosine);

    return 0;
}
