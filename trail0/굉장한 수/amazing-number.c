#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 조건 1: 홀수이면서 3의 배수 -> 굉장한 수이므로 true
    if (n % 2 != 0 && n % 3 == 0) {
        printf("true");
    } 
    // 조건 2: 짝수이면서 5의 배수 -> 이것도 굉장한 수이므로 true!
    else if (n % 2 == 0 && n % 5 == 0) {
        printf("true"); // <- "true"로 수정
    } 
    // 두 조건 모두 만족하지 않는 모든 경우 -> false
    else {
        printf("false"); // <- 추가됨
    }   
    
    return 0;
}