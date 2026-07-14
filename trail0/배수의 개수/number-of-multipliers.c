#include <stdio.h>

int main() {
    // Please write your code here.

    int n;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &n);

        if(n % 3 == 0) {
            cnt1++;
        }

        if(n % 5 == 0) {
            cnt2++;
        }
    }

    printf("%d ", cnt1);
    printf("%d ", cnt2);
    return 0;
}