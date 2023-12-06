#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int count = 0;
    int i = 0;
    double dolar;
    char *token, input[1024];

    printf("Enter numbers separated by spaces, tabs, or newlines:\n");

    fgets(input, sizeof(input), stdin); /* Read input from user */

    printf("the values that you enter is: %s\n", input);
    token = strtok(input, " \t\n"); /* Tokenize using space, tab, and newline as delimiters */
    printf("Index\t Value\t Shekels \n");
    dolar = atof(token);
    while (token != NULL) {
        /* Allocate memory for the numbers array dynamically */
        count++;
        token = strtok(NULL, " \t");
        printf("%d\t%.2f\t%.2f\n", (1 + i), atof(token), (atof(token) * dolar));
        i++;
    }
    return 0;
}

