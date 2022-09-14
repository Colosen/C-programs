#include <stdio.h>

#define MAX_SIZE 10000

int main() {

    char s[MAX_SIZE];
    char c;
    int n, i, l;
    n = 0; l = 0;

    for (i = 0; (c = getchar()) != '\n'; ++i) {
        s[i] = c;
        ++l;
    }

    printf("%s\n", s);

    for (i = 0; i < l; ++i) {
        n = n*10 + (s[i] - '0');
    }

    printf("%d", n);

}