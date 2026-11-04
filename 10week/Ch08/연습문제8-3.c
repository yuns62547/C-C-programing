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

    for (i = 1; i < count; i += 2) {
        printf("%d ", arr[i]);
    }

    return 0;
}