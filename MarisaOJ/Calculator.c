#include <stdio.h>

int main() {
    double a, b;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);

    if(op == '+') printf("%.3lf\n", a + b);
    else if(op == '-') printf("%.3lf\n", a - b);
    else if(op == '*') printf("%.3lf\n", a * b);

    else if(op == '/') {
        if(b == 0) printf("ze");      //  number/0 = ze
        else printf("%.3lf\n", a / b);
    }
    else printf("ze");

    return 0;
}
