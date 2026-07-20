#include <stdio.h>

int main() {
    // Please write your code here.

    int sum = 0;
    int n;
    scanf("%d", &n);

    for(int i = n; i <= 100; i++) {
        sum += i;
    }

    printf("%d\n", sum);
    
    return 0;
}