#include <stdio.h>

int main() {
    // Please write your code here.

    int arr1[4][4]; // 4행 4열 공간 마련
    int sum; // 합계를 저장할 변수

    for(int i = 0; i < 4; i++) {
        sum = 0; // 줄이 바뀔 때마다 합계를 초기화 - 초기화 안하면 이전 줄까지 더함

        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr1[i][j]);
            sum = sum + arr1[i][j]; // 입력받은 즉시 더함
        }

        printf("%d\n", sum);
    }
    return 0;
}