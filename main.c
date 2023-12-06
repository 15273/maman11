#include <stdio.h>
int main() {
    double dollar, number = 0;
    printf("please enter numbers separated by spaces / tabs:");
    scanf("%lf", &dollar);
    printf("$\t\t\t\tNIS\n");
    while (scanf("%lf", &number) == 1) {
        printf("%.2lf\t\t\t\t%.2lf\n", number * dollar, number);
    }
    return 0;
}