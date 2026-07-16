#include <stdio.h>

int main() {
    int matrix[3][3];

    // 1. 입력 받기 (3x3 고정)
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 2. 3배로 만들기 및 바로 출력
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            // 원소에 3을 곱해서 출력합니다.
            printf("%d ", matrix[i][j] * 3);
        }
        // 한 행을 다 출력했으면 줄바꿈!
        printf("\n");
    }

    return 0;
}