#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a<=d && c<=b) printf("YES");
    else printf("NO");

    return 0;
}