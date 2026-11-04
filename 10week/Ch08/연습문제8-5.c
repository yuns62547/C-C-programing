#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    return 0;
}