//
// Created by מנחם מנדל קליש on 06/12/2023.
//
#include <stdio.h>
#include <math.h>

double calculateCos(double x) {
    double result = 1.0; // First term of the series
    double term = 1.0;
    int sign = -1;
    double xSquared = x * x;
    int fact = 2;

    for (int i = 2; fabs(term) > 0.000001; i += 2) {
        term = pow(x, i) / fact;
        result += sign * term;
        sign *= -1;
        fact *= (i + 1) * (i + 2); // Update factorial for the next term
    }

    return result;
}

int main() {
    double angle;
    printf("Enter an angle in radians: ");
    scanf("%lf", &angle);

    double cosine = calculateCos(angle);
    printf("Cosine calculated by your function: %.8f\n", cosine);

    printf("Cosine calculated by standard cos function: %.8f\n", cos(angle));

    return 0;
}
