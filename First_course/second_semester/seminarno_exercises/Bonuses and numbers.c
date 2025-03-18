#include <stdio.h>

int main() {
    int a = 0;
    float bonus = 0.0;

    printf("Type a number: ");
    scanf("%d", &a);

    if (a <= 100) {
        bonus = 5;
    } else if (a > 1000) {
        bonus = 0.2 * a;
    } else if (a > 100) {
        bonus = 0.1 * a;
    }

    if (a % 2 == 0) {
        bonus += 1;
    } else if (a % 10 == 5) {
        bonus +=2;
    }

    printf("%.1f %.1f", bonus, a+bonus);

    return 0;
}
