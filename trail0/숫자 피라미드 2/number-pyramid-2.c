#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int num = 1; // 1부터 시작할 숫자
    
    for(int i = 0; i < n; i++) {
        // i가 0일 때 j는 1번, i가 1일 때 j는 2번... 즉, j <= i까지 반복
        for(int j = 0; j <= i; j++) {
            printf("%d ", num);
            num++; // 출력하고 나서 숫자 증가
        }
        printf("\n"); // 한 줄 다 찍었으니 줄바꿈
    }
    
    return 0;
}