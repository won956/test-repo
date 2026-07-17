#include <stdio.h>

int main() {
    // Please write your code here.

    int arr[4][4];
    int sum = 0; // 바깥에 딱 한 번만 0으로 초기화

    // 전체 다 입력받기
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 합계 구하기 (조건에 맞는 칸만)
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(j <= i) {
                sum = sum + arr[i][j];
            }
        }
    }

    printf("%d", sum);
    return 0;
}