#include <stdio.h>

int main() {
    // Please write your code here.

    int n;
    scanf("%d", &n);

    // 위쪽 삼각형 (3, 2, 1)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 2. 아래쪽 삼각형 (2, 3)
    // 위쪽에서 마지막에 1개짜리 줄을 출력했으니,
    // 다음은 2개짜리 줄부터 시작해야 함
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}