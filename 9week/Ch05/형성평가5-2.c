#include <stdio.h>

int main(void) {
    int n;
    int odd_count = 0;
    int even_count = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n % 2 != 0) {
            odd_count++;
        } else {
            even_count++;
        }
    }

    printf("odd : %d\n", odd_count);
    printf("even : %d\n", even_count);

    return 0;
}