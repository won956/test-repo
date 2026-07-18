#include <stdio.h>

int main() {
    // Please write your code here.

    int n;
    scanf("%d", &n);

    for(int i = 0; i < 2 * n - 1; i++) {
        int count;

        if(i < n) {
            count = i + 1;
        } else {
            count = 2 * n - 1 - i;
        }

        for(int j = 0; j < count; j++) {
            printf("*");

        }
        printf("\n\n");
    }
    return 0;
}