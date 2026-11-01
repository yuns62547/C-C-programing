#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > 0 && n2 > 0 && n3> 0) {
    printf("All Positive\n");
    }
    else if (n1 == 0 || n2 == 0 || n3 == 0) {
        printf("Contain Zero\n");
    }
    else {
        printf("Mixed\n");
    }
return 0;
}