#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    printf("%.2lf", distance);

    return 0;
}

// git add .
// git commit -m "feat(CF-Group/Distance.c): add solution using sqrt and pow to calculate distance between two points rounded to 2 decimals"
// git push
