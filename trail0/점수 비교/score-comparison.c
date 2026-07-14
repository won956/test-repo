#include <stdio.h>

int main() {
    
    int A_mat, A_eng, B_mat, B_eng;
    scanf("%d %d %d %d", &A_mat, &A_eng, &B_mat, &B_eng);

    if(A_mat > B_mat && A_eng > B_eng) {
        printf("1"); 
    } else {
        printf("0");
    }
    return 0;
}