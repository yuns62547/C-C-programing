#include <stdio.h>

int main() {
    int arr[10];
    int even_sum = 0;
    int odd_sum = 0;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if ((i + 1) % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    double odd_avg = (double)odd_sum / 5;

    printf("sum : %d\n", even_sum);
    printf("avg : %.1f\n", odd_avg);

    return 0;
}