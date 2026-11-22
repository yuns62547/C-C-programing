#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point p1, p2;
    double cx, cy;

    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    cx = (p1.x + p2.x) / 2.0;
    cy = (p1.y + p2.y) / 2.0;

    printf("Center point = (%.1lf, %.1lf)\n", cx, cy);

    return 0;
}