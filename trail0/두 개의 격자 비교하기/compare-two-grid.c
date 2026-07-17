#include <stdio.h>

int main() {
    // Please write your code here.

    int n, m;
    scanf("%d %d", &n, &m);

    int arr1[n][m];
    int arr2[n][m];

    // 첫 번째 2차원 격자 입력
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // 두 번째 격자 입력 빛 비교 후 출력
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr2[i][j]);

            // 같은 위치의 수 비교
            if(arr1[i][j] == arr2[i][j]) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }

        printf("\n");
    }
    return 0;
}