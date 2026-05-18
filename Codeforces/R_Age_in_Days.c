#include <stdio.h>

int main(){
    int day, month, year;
    scanf("%d", &day);

    year = day/365;
    month = (day%365)/30; 
    day = (day%365) % 30;

    printf("%d years\n%d months\n%d days", year, month, day);
    return 0;
}

// year = day / 365;        // মোট দিনকে 365 দিয়ে ভাগ করলে কত বছর হবে
// month = (day % 365) / 30; // বছর বাদ দিলে বাকি দিনগুলো থেকে কত মাস হবে
// day = (day % 365) % 30;   // মাস বাদ দিলে বাকি দিনগুলো থেকে কত দিন হবে
