#include <stdio.h>

int main() {
    int scores[3][4] = {0};
    int col_sum[4] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            scores[i][3] += scores[i][j];
            col_sum[j] += scores[i][j];
        }
        col_sum[3] += scores[i][3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 4; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}