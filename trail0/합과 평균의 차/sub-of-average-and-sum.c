#include <stdio.h>

int main() {
    
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int sum = a+b+c;
    double avg = sum / 3.0;

    printf("%d\n", a+b+c);
    printf("%.lf\n", (a+b+c)/3.0);
    printf("%.lf", sum-avg);

    return 0;
}