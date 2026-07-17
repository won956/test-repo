#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int n, m;
    scanf("%d %d", &n, &m);

    // n * m 크기의 별을 출력합니다.
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("* ");
        printf("\n");
    }
    
    return 0;
}
