#include <stdio.h>

int main() {
    // Please write your code here.

    int a, b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}