#include <stdio.h>

int main(void) {
    char ch = 'a';
    int num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j < 5 - i; j++) {
            printf("%d", num++);
            if (j < 4 - i || i < 4) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}