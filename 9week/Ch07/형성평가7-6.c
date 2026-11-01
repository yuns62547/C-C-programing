#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int num = 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j < i; j++) {
            printf("%d", num++);
            if (j < i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}