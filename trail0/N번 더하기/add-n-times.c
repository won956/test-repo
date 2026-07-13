#include <stdio.h>

int main() {
    
    int i;
    int A, N;
    scanf("%d %d", &A, &N);

    for(i=0;i<N;i++) {
        A = A+ N;
        printf("%d\n", A);
    }
    return 0;
}