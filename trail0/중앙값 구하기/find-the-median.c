#include <stdio.h>

int main() {
    // Please write your code here.

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int median;

    // a가 중앙값인 경우
    if((a >= b && a <= c) || (a <= b && a >= c)) {
        median = a;
    }

    // b가 중앙값인 경우
    else if((b >= a && b <= c) || (b <= a && b >=c)) {
        median = b;
    }

    // c가 중앙값인 경우
    else {
        median = c;
    }

    printf("%d", median);
    
    return 0;
}