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

    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max + min);

    return 0;
}