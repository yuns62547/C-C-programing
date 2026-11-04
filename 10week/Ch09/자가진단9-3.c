#include <stdio.h>

int main() {
    int arr[100];
    arr[0] = 100;
    scanf("%d", &arr[1]);

    int i = 1;
    while (arr[i] >= 0) {
        i++;
        arr[i] = arr[i - 2] - arr[i - 1];
    }

    for (int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}