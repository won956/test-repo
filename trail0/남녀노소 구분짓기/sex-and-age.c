#include <stdio.h>

int main() {

    // 변수 선언
    int gender,age;

    // 입력
    scanf("%d", &gender);
    scanf("%d", &age);

    // gender가 0인지 1인지 판단하기
    if(gender == 0) {
        // gender가 0일 때, age가 19이상이면 MAN이, 19보다 작다면 BOY가 됩니다.
        if(age >= 19)
            printf("MAN\n");
        else
            printf("BOY\n");
    }
    else {
        // gender가 1일 때, age가 19이상이면 WOMAN이, 19보다 작다면 GIRL이 됩니다.
        if(age >= 19)
            printf("WOMAN\n");
        else
            printf("GIRL\n");
    }
    return 0;
}

