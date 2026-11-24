#include <stdio.h>

int main(void) {
    int test[] = {1, 2, 3, 4};
    printf("test %i", 2[test]); // 2[test] = 2[test]와 값이 같다. 둘 다 인덱스

    return 0;
}