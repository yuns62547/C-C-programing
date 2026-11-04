#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int i, val;

    for (i = 0; i < 100; i++) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        arr[count++] = val;
    }

    printf("%d\n", count);

    for (i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");

    return 0;
}