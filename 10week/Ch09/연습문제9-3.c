#include <stdio.h>

int main() {
    int p[20];
    p[0] = 1;
    p[1] = 1;

    for (int i = 2; i < 20; i++) {
        p[i] = p[i - 1] + p[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}