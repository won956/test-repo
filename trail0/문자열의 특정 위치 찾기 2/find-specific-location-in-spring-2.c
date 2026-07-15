#include <stdio.h>

int main() {
    // Please write your code here.

    char str[5][20] = {"apple","banana","grape","blueberry","orange"};
    char a;
    int cnt = 0;

    scanf("%c", &a);

    for(int i = 0; i < 5; i++) {
        if(str[i][2] == a|| str[i][3] == a) {
            printf("%s\n", str[i]);
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}