#include <stdio.h>

int main() {
    int i = 1;
    float dollar, number = 0;

    printf("Enter numbers separated by spaces, tabs, or newlines:\n");
    scanf("%f", &dollar);

    printf("Index\tValue\tShekels\n");
    while (scanf("%f", &number) == 1) {
        printf("%i\t%f\t%f\n", i, number, number * dollar);
        i++;
    }

    return 0;
}
