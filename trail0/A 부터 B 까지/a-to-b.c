#include <stdio.h>

int main() {
    // Please write your code here.

    int a, b;
    scanf("%d %d", &a, &b);

    int curr = a;

    while(curr <= b) {
        printf("%d ", curr);

        if(curr % 2 == 0) {
            curr +=3;
        } else {
            curr *=2;
        }
    }
    return 0;
}