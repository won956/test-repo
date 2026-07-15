#include <stdio.h>

int main() {
    // Please write your code here.

    int n;
    scanf("%d", &n);

    if(n >= 80) {
        printf("pass");
    } else {
        printf("%d %s", 80-n, "more score");
    }
    return 0;
}