#include <stdio.h>

int main() {
    // Please write your code here.

    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) { // n행만큼 반복
        for(int j = 0; j < m; j++) { // M열만큼 반복
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}