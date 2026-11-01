#include <stdio.h>

int main(void) {
    int n;
    int score;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        sum += score;
    }

    double avg = (double)sum / n;

    printf("%.2f\n", avg);

    return 0;
}