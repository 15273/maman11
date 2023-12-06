//
// Created by מנחם מנדל קליש on 06/12/2023.
//

#ifndef UNTITLED2_MAMAN11_B_H
#define UNTITLED2_MAMAN11_B_H

#include <stdio.h>
#include <math.h>

double absolute(double num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

/* calculate one step */
float oneStepInTheCalculator(int tow_jump, double x) {
    int i;
    float factorial = (float) tow_jump;
    float number = (float) x;
    for (i = 1; i < tow_jump; i++) {
        factorial = factorial * (float) (tow_jump - (i));
        number = (float) x * number;
    }
    number = (float) (number / ((float) factorial));
    return number;
}


#endif //UNTITLED2_MAMAN11_B_H
