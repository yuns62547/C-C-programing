#include <stdio.h>

// 삽입 정렬 함수 정의
// arr: 정렬할 배열, n: 배열의 크기
void insertionSort(int arr[], int n) {
    int i, j, key;

    // 1. 두 번째 원소(인덱스 1)부터 시작하여 마지막 원소까지 반복
    // (첫 번째 원소는 이미 정렬된 상태로 간주합니다)
    for (i = 1; i < n; i++) {
        key = arr[i]; // 이번에 정렬할 대상을 key 변수에 백업
        j = i - 1;    // key 바로 왼쪽(정렬된 부분)의 마지막 인덱스

        // 2. 정렬된 부분의 원소들을 뒤에서부터 앞으로 탐색하며
        // key보다 큰 원소를 만나면 오른쪽으로 한 칸씩 이동시킴
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 값을 오른쪽으로 밀어냄
            j--;
        }

        // 3. 더 이상 자신보다 큰 값이 없거나 배열의 끝에 도달했을 때
        // 빈 자리에 key 값을 삽입
        arr[j + 1] = key;
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

    // 삽입 정렬 함수 호출 (오름차순 정렬)
    insertionSort(arr, n);

    printf("\n정렬 후 배열 (오름차순): \n");
    printArray(arr, n);

    return 0;
}