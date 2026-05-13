#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a == c || a == d || b == c || b == d) printf("YES");
    else printf("NO");
    return 0;
}

// আয়তক্ষেত্র (rectangle) combine করতে হলে height বা width সমান হতে হবে।