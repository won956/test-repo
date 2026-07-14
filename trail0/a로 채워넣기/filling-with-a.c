#include <stdio.h>
#include <string.h>

int main() {
    
    char str[101];

    scanf("%s", str);

    int len = strlen(str);

    str[1] = 'a';
    str[len - 2] = 'a';

    printf("%s\n", str);

    return 0;
}