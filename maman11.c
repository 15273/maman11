#include <stdio.h>


int main() {
    int c;
    int ns, nt, nl;
    ns = nt = nl = 0;/*ns=space, nt=tab, nl=lines*/
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ns++;
        } else if (c == '\t') {
            nt++;
        } else if (c == '\n') {
            nl++;
        }
    }
    printf("---------------\n");
    printf("Total space: \t%d\t Tabs: \t%d lines: \t%d\n", ns, nt, nl);
}