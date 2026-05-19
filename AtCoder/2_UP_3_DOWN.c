#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);

    if(y>x){ // up
        if(y-x<=2) printf("Yes"); // Yes = stairs, No = elevator
        else printf("No");
    } else { // down
        if(x-y<=3) printf("Yes");
        else printf("No");
    }

    return 0;
}