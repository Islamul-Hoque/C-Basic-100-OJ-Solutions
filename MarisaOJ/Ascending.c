#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min=a, max=a;

    // min
    if(b<min) min =b; 
    if(c<min) min =c;

    // max
    if(b>max) max =b; 
    if(c>max) max =c; 

    // middle
    int middle = (a+b+c) -min -max;

    printf("%d %d %d", min, middle, max);
    return 0;
}