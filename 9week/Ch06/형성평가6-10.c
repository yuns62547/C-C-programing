#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int step = (a > b) ? -1 : 1;

    for (int i = 1; i <= 9; i++) {
        int j = a;
        while (1) {
            printf("%d * %d = %2d", j, i, j * i);
            if (j == b) break;
            printf("   ");
            j += step;
        }
        printf("\n");
    }

    return 0;
}