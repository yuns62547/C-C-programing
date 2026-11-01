#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if(n >= 4.0) {
        printf("scholarship\n");
    } else if(n >= 3.0) {
        printf("next semester\n");
    } else if(n >= 2.0) {
        printf("seasonal semester\n");
    } else {
        printf("retake\n");
    }
    return 0;
}