#include <stdio.h>

int main() {
    int a, b, c, x, y, z;  // day month, year || year → month → day
    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);

    if(c<z) printf("1"); // year
    else if(c>z) printf("2");
    else {  // year same
        if(b<y) printf("1");  // month
        else if(b>y) printf("2");
        else{  // month same
            if(a<x) printf("1"); // day
            else printf("2");
        }
    }
    return 0;
}