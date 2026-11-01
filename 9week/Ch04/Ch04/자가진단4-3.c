#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if(n >= 20) {
        printf("adult\n");
    } else {
        printf("%d years later\n", 20 - n);
    }
    return 0;
}