//
// Created by מנחם מנדל קליש on 04/12/2023.
//

#include "lerning.h"

int main() {
    int c, i, count, highest, j;
    int nchars[HIGH - LOW];
    char str1[100], str2[100];
    fgets(str1, 5, stdin);
    fgets(str2, 5, stdin);
    printf("%s : \n", str1);
    printf(" str2: %s ", str2);
    for (int i = 0; i < HIGH - LOW; ++i) {
        nchars[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (LOW <= c && HIGH >= c) {
            ++nchars[c - LOW];
            if (highest < nchars[c - LOW])
                highest = nchars[c - LOW];
        }
    }
    for (i = highest; i > 0; --i) {
        printf("%4d|", i);
        for (j = 0; j < HIGH - LOW; ++j) {
            if (nchars[j] >= i)
                printf("#");
            else
                printf(" ");
        }
    }
}
/*gcc -g -o lerning  lerning.c -std=c90 -ansi -pedantic -Wall
 *
 * gcc lerning.c
 * ./a.out < text.txt
*/