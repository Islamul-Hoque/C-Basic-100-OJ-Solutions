#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    int x = -b/a;

    if(a == 0 && b == 0) printf("INFINITE SOLUTIONS");
    else if (a == 0 && b != 0) printf("NO SOLUTION");
    else {
        if((-b)% a == 0){
            printf("%d", x);
        } else printf("NO SOLUTION");
    }
    return 0;
}

// INFINITE SOLUTIONS → যদি a == 0 && b == 0 হয়। কারণ equation দাঁড়ায় 0x + 0 = 0, যেটা সব x এর জন্য সত্য।
// NO SOLUTION → যদি a == 0 && b != 0 হয়। তখন equation দাঁড়ায় 0x + b = 0 → b = 0, কিন্তু যেহেতু b != 0, কোনো solution নেই।

// Unique Integer Solution → যদি a != 0 হয়। তখন solution হবে x = -b / a।
//         যদি -b % a == 0 হয় → integer solution পাওয়া যাবে।
//         যদি ভাগশেষ থাকে → integer solution নেই, তাই "NO SOLUTION" প্রিন্ট করতে হবে।