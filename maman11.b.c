//
// Created by מנחם מנדל קליש on 06/12/2023.
//

#include "maman11.b.h"

/* check if the current step should be negative or positive */
int posOrNeg(int i) {
    if (i % 2 == 0) {
        return 1;
    }
    return -1;
}

/* calculate one step */
float oneStepInTheCalculator(int tow_jump, double x) {
    int i;
    float factorial = tow_jump, number = (float) x;
    for (i = 1; i < tow_jump; i++) {
        factorial = factorial * (float) (tow_jump - (i));
        number = (float) x * number;
    }
    number = (float) (number / ((float) factorial));
    return number;
}

/* the main method that calculate the cosine */
double double_my_cos(double x_to_cos) {
    double min_size_to_stop = 0.000001;
    float next_number = 1, cosine = 0;
    int i = 0, tow_jump = 0, flag = 1;

    /*
     * the main loop work until the next step is less then the minimum value = 0.000001
     * */

    while (flag == 1) {
        cosine += posOrNeg(i) * next_number;
        tow_jump += 2;
        i += 1;
        if (next_number < min_size_to_stop)
            flag = 0;
        next_number = oneStepInTheCalculator(tow_jump, x_to_cos);
    }
    /*
     * comparing between are result and the built in cos function of c
     * */
    printf("the result of aur method is: %f\n", cosine);
    printf("and the result of the built in c method is:\t %f", cos(x_to_cos));
    return cosine;
}

int main() {
    double my_cos, radians;
    printf("please enter a number that you want to calculate the cosine for him: ");
    scanf("%lf", &my_cos);
    /*
     * convert degrees to radians
     * in case that i get the numbers as a degrees
     * i will convert him and then call the method with the radians
     * */
    radians = my_cos * (M_PI / 180.0);
    double_my_cos(radians);
    /*
     * in case that the number is already radians
     *
     * (the option that the number is a regular number not exist)
     * */

    double_my_cos(my_cos);
}