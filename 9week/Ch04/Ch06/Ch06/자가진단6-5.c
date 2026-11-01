#include <stdio.h>

int main(void) {
    int n;
    int count3 = 0;
    int count5 = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 3 == 0) {
            count3++;
        }
        if (n % 5 == 0) {
            count5++;
        }
    }

    printf("Multiples of 3 : %d\n", count3);
    printf("Multiples of 5 : %d\n", count5);

    return 0;
}