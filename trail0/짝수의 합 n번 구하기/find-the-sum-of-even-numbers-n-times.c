#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // 몇 번 반복할지 입력받음

    for (int i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int sum = 0; // 합계를 저장할 바구니

        // a부터 b까지 반복
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) { // 짝수인지 확인
                sum += j; // 짝수라면 더함
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}