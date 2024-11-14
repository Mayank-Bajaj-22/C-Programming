#include <stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter 1st point coordinates: ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter 2nd point coordinates: ");
    scanf("%d %d", &x2, &y2);
    
    printf("Enter 3rd point coordinates: ");
    scanf("%d %d", &x3, &y3);

    // Check if the x-coordinates are equal to avoid division by zero
    if ((x2 - x1) == 0 || (x3 - x2) == 0) {
        printf("Division by zero encountered. Points do not form a straight line.\n");
    } else {
        float m1 = (float)(y2 - y1) / (x2 - x1);
        float m2 = (float)(y3 - y2) / (x3 - x2);

        if (m1 == m2) {
            printf("All three points lie on one straight line.\n");
        } else {
            printf("All three points do not lie on one straight line.\n");
        }
    }
    return 0;
}