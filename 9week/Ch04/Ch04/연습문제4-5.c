#include <stdio.h>

int main(void) {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 >= 4 && n2 >= 4) {
    printf("WIN.\n");
    }
    else if (n1 >= 4 || n2 >= 4) {
        printf("DRAW.\n");
    }
    else {
        printf("LOSE.\n");
    }
return 0;
}