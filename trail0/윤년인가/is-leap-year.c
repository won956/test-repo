#include <stdio.h>

int main() {
    // Please write your code here.

    int y;
    scanf("%d", &y);

    // 4로 나누어 떨어지는 해는 윤년, 그 밖의 해는 평년
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}