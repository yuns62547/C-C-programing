#include <stdio.h>

int main(void) {
    int n;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("even : %d\n", even);
    printf("odd : %d\n", odd);

    return 0;
}
```[cite: 16]