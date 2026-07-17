#include <stdio.h>

int main() {
    // Please write your code here.

    int arr[4][4];
    int count = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);

            // 5의 배수인지 체크
            if(arr[i][j] % 5 == 0) {
                count = count + 1; // 5의 배수라면 count를 하나 올림
            }
        }
    }

    printf("%d\n", count);
    
    return 0;
}