#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char ch = 'A';
    int num = 0;

    for (int i = 1; i <= n; i++) {
        int first = 1;

        for (int j = 0; j <= n - i; j++) {
            if (!first) {
                printf(" ");
            }
            printf("%c", ch++);
            first = 0;
        }

        for (int j = 0; j < i - 1; j++) {
            if (!first) {
                printf(" ");
            }
            printf("%d", num++);
            first = 0;
        }

        printf("\n");
    }

    return 0;
}