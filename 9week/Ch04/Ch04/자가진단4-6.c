#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Non positive\n");
    }
    else if (n % 2 == 0) {
        printf("Even Number\n");
    }
    else {
        printf("Odd Number\n");
    }
return 0;
}