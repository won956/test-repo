#include <stdio.h>

int main() {
    // Please write your code here.

    int n;
    int sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= 101; i++) {
        sum += i;

        // 합이 n 이상이 되는 순
        if(sum >= n) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}