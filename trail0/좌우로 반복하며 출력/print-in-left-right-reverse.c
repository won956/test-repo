#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2 == 0) {
                // 짝수 줄: 1, 2, 3, 4 순서
                printf("%d", j + 1);
            } else {
                // 홀수 줄: 4, 3, 2, 1 순서
                printf("%d", n - j);
            }
        }
        // 줄바꿈은 j 반복문이 다 끝난 뒤에!
        printf("\n");
    }
    return 0;
}