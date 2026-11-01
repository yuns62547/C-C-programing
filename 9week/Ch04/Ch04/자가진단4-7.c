#include <stdio.h>

int main(void) {
    int ch;

    scanf("%C", &ch);

    if(ch == 'A') {
        printf("Excellent\n");
    }
    else if(ch == 'B') {
        printf("Good\n");
    }
    else if(ch == 'C') {
        printf("Usually\n");
    } else {
        printf("error\n");
    }
    return 0;
}