#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    // 1. 배열의 첫 번째부터 마지막에서 두 번째 원소까지 반복
    for (i = 0; i < n - 1; i++) {
        // 현재 구간에서 가장 작은 값을 가진 원소의 인덱스를 i로 가정
        min_idx = i;

        // 2. 아직 정렬되지 않은 남은 원소들과 비교하여 최솟값 탐색
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // 더 작은 값을 찾으면 인덱스 갱신
            }
        }

        // 3. 찾은 최솟값(min_idx)이 현재 구간의 시작점(i)과 다르다면 서로 교환(Swap)
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

// 배열의 요소를 출력하는 함수
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // 정렬을 테스트할 샘플 배열
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 전체 크기 계산

    printf("정렬 전 배열: \n");
    printArray(arr, n);

    // 선택 정렬 함수 호출 (오름차순 정렬)
    selectionSort(arr, n);

    printf("\n정렬 후 배열 (오름차순): \n");
    printArray(arr, n);

    return 0;
}