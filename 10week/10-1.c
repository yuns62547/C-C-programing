#include <stdio.h>

int binarySearch(int arr [] , int size, int target) {
    int left = 0;
    int right = size -1;

    while(left <= right) {  //left가 right보다 작거나 같을 때 실행.
        int mid = (left + right) / 2;   // 중간 위치 계산

        if (arr[mid] == target) {   // 중간 위치 값이 같다면
            return mid + 1;   // 중간 위치를 반환하고 탐색을 종료한다.
        } else if (arr[mid] < target) { // 중간 위치 값이 타겟보다 작다면
           left = mid + 1;   // 시작 위치를 중간 위치 +1로 변경한다.
        } else {    // 그렇지 않을 경우
            right = mid -1; // 끝 위치를 중간 위치 -1로 변경
        }
    }
return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 2, 3, 38, 56, 72, 91};
    int size = sizeof(arr) /sizeof(arr[0]);
    int target = 23;

    int result = binarrySearch(arr, size, target);
}