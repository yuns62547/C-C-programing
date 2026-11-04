#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int i, val;
    int mult_count = 0;
    int sum = 0;

    for (i = 0; i < 100; i++) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        arr[count++] = val;
    }

    for (i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            mult_count++;
            sum += arr[i];
        }
    }

    double avg = mult_count > 0 ? (double)sum / mult_count : 0.0;

    printf("Multiples of 5 : %d\n", mult_count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}