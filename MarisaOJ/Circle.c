#include <stdio.h>

int main() {
    double r;
    scanf("%lf", &r);

    double circumference = 2*3.14*r; 
    double area =3.14*r*r;

    printf("%.3lf %.3lf",circumference, area);
    return 0;
}

// Circumference of a circle → বৃত্তের পরিধি (Formula: 2⋅𝜋⋅𝑟)
// Area = 𝜋*r*r


// git add .
// git commit -m "feat(CF-Group): add Circle problem solution with circumference and area calculation rounded to 3 decimals"
// git push
