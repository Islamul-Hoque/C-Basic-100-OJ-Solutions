#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    int mul = a*b;
    if((a>=1 && a<=9) && (b>=1 && b<=9)) printf("%d", mul);
    else printf("-1");

    return 0;
}