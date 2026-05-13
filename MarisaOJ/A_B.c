#include <stdio.h>

int main() {
    int a,b, sum=0;
    scan("%d %d", &a, &b);

    sum = a+b;
    printf("%d", sum);
    return 0;
}



#include <stdio.h>

int main() {
    long long int a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long int ans = (a * b) % c;
    printf("%lld", ans);
    return 0;
}