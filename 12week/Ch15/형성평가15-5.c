void input(struct Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%19s %d %d %d", arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
        arr[i].total = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
    }
}

void sort(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].total < arr[j].total) {
                struct Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void output(struct Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }
}