#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);

    int arr[n];

    // 먼저 순서대로 입력받기
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 역순 이동
    for(int i = n - 1; i >=0; i--) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}