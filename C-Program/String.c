#include <stdio.h>

int main() {
    char s[101];
    fgets(s, 101, stdin);

    printf("%s", s);
    printf("%s", s);
    printf("%s", s);
    return 0;
}