#include <stdio.h>

int main() {
    // 변수 선언
    int a, b;

    // 입력
    scanf("%d %d", &a, &b);

    // a >= b
    if (a >= b) printf("1\n");
    else printf("0\n");

    // a > b
    if (a > b) printf("1\n");
    else printf("0\n");

    // a <= b
    if (a <= b) printf("1\n");
    else printf("0\n");

    // a < b
    if (a < b) printf("1\n");
    else printf("0\n");

    // a == b
    if (a == b) printf("1\n");
    else printf("0\n");

    // a != b
    if (a != b) printf("1\n");
    else printf("0\n");

    return 0;
}
