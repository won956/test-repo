#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.

    char str1[21];
    char str2[21];

    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 > len2) {
        printf("%s %d\n", str1, len1);
    } else if(len1 < len2) {
        printf("%s %d\n", str2, len2);
    } else {
        printf("same\n");
    }
    return 0;
}