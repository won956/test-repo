#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 총 2n + 1줄을 돈다고 생각하세요 (위 4줄 + 빈 줄 1줄 + 아래 4줄)
    for(int i = 0; i < 2 * n + 1; i++) {
        
        // i가 n일 때(딱 가운데 줄)는 별을 찍지 않고 빈 줄을 출력
        if(i == n) {
            printf("\n");
        } 
        else {
            // 나머지 경우에는 별 4개를 가로로 출력
            for(int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}