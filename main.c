#include <stdio.h>

int main() {
    double dollar, number = 0;
    printf("please enter numbers separated by spaces / tabs if you want the program to stop pres q:\n");
    scanf("%lf", &dollar);
    printf("\n\t$\t\t\t\tNIS\t\n");
    while (scanf("%lf", &number) == 1) {
        printf("\t%.2lf\t\t\t\t%.2lf\t\n", number * dollar, number);
    }
    return 0;
}

/*
 * you need to check this flags in the terminal:
 * also i make a (make file) for this file
 * gcc -g -o main main.c -std=c90 -ansi -pedantic -Wall
 * take this and paste this in the terminal on your code
*/
