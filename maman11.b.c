#include <stdio.h>
#include <math.h>

/**
 * return the absolute value of x*/
double pos(double x) {
    if (x < 0)
        return -x;
    return x;
}

/**
 *  Reduce angle to the range [-pi, pi]
 *  */
double reduce_angle(double angle) {

    while (angle > 3.141592653589793) {
        angle -= 2 * 3.141592653589793;
    }
    while (angle < -3.141592653589793) {
        angle += 2 * 3.141592653589793;
    }
    return angle;
}

int fact(int n) {
    int factorial = 1;
    int i;
    for (i = 2; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

double double_my_cos(double x) {
    double result = 1.0;  /* Initialize result with the first term in the series */
    double power = 1.0, next = 1.0;
    int sign = -1;
    int n = 2;
    x = reduce_angle(x);  /* Reduce the angle within the range [-pi, pi] */
    while (pos(next) > 0.000001) {
        power *= x * x;  /* Update the power term */
        next = (sign * power / (double) fact(n));
        result += next;  /* Calculate the next term in the series */
        sign *= -1;  /* Alternate the sign */
        n += 2;
    }
    return result;
}


int main() {
    double angle;
    double cosine;
    printf("Please enter an angle (in radians) to calculate its cosine: ");
    /**
     * the number can't be grater then 2π because that we
     * get the number in radians
     * */
    scanf("%lf", &angle);
    printf("the built in function of c return : %f\n", cos(angle));
    cosine = double_my_cos(angle);
    printf("Cosine of %.2f radians in are method is: %.6f\n", angle, cosine);
    return 0;
}

/*
 * you need to check this flags in the terminal:
 * also i make a (make file) for this file
 * gcc -g -o maman11.b maman11.b.c -std=c90 -ansi -pedantic -Wall
 * take this and paste this in the terminal on your code
*/
