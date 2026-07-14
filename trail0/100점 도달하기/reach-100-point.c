#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    for(int i = n; i < 101; i+=1) {
        if(i >= 90) {
            printf("A ", i);
        } else if (i >= 80) {
            printf("B ", i);
        } else if (i >= 70) {
            printf("C ", i);
        } else if (i >= 60) {
            printf("D ", i);
        } else {
            printf("F ", i);
        }
    }
    return 0;
}