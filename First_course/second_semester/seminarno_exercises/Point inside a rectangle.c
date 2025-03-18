#include <stdio.h>

int main() {
    int x, y, x1, y1, x2, y2;

    printf("Type a number for x: ");
    scanf("%d", &x);
    printf("Type a number for y: ");
    scanf("%d", &y);
    
    while (1) {
        printf("Type a number for x1: ");
        scanf("%d", &x1);
        printf("Type a number for y1: ");
        scanf("%d", &y1);
        printf("Type a number for x2: ");
        scanf("%d", &x2);
        printf("Type a number for y2: ");
        scanf("%d", &y2);
        if (x1 < x2 && y1 < y2) {
            break;
        }
        printf("Invalid input: ensure x1 < x2 and y1 < y2.\n");
    }

    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        printf("Inside");
    } else {
        printf("Outside");
    }

    return 0;
}
