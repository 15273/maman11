#include <stdio.h>

int main() {
    int i = 1;
    double dollar, number = 0;
    printf("Enter numbers separated by spaces, tabs, or newlines:\n");
    scanf("%lf", &dollar);
    printf("Index\t\t$\t\tNIS\n");
    while (scanf("%lf", &number) == 1) {
        printf("%i\t\t%.2lf\t\t%.2lf\n", i, number * dollar, number);
        i++;
    }
    return 0;
}

