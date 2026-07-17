#include <stdio.h>

int main() {
    // Please write your code here.

    int arr[3][3]; // [행][열]
    int temp;

    // 첫 번째 배열 입력
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 두 번째 배열을 입력받으면서 바로 곱하기
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &temp); // 값 임시로 받음
            arr[i][j] = arr[i][j] * temp; // 즉시 곱해서 배열에 덮어쓰기
        }
    }
    
    // 결과 출력
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
    
        }
        printf("\n");
    }
    return 0;
}