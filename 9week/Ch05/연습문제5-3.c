#include <stdio.h>

int main(void) {
    int score;
    while (1) {
        scanf("%d", &score);
        if (score < 0 || score > 100) {
            break;
        }
        else if (score >= 80) {
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }
    return 0;
}
```[cite: 4]