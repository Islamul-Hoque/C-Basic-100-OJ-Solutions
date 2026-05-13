#include <stdio.h>

int main() {
    long long int a,b;
    scanf("%lld %lld", &a, &b);

    long long int last_Digit = (a%10) + (b%10);
    printf("%lld", last_Digit);
    return 0;
}