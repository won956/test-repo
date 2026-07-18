#include <stdio.h>

int main() {
    // Please write your code here.

    int n;
    scanf("%d", &n);

    // 위쪽 삼각형
    for(int i = 0; i < n; i++) {
        // 별의 개수만큼 출력
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 아래쪽 삼각형 (i는 n-2부터 0까지)
    for(int i = n - 2; i >=0; i--) {
        // 별의 개수만큼 출
        for(int j = 0; j <=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}