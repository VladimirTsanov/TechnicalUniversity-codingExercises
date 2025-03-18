#include <stdio.h>

int main() {
    int n, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    do {
        printf("Type a quantity of numbers you will type: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("The quantity must be greater than 0. Try again!\n");
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        int temp = 0;
        do {
            printf("Type a number in range 1 to 1000: ");
            scanf("%d", &temp);
            if (temp < 1 || temp > 1000) {
                printf("You should type a number in range 1 to 1000! Try again!\n");
            }
        } while (temp < 1 || temp > 1000);

        if (temp < 200) {
            p1++;
        } else if (temp >= 200 && temp <= 399) {
            p2++;
        } else if (temp >= 400 && temp <= 599) {
            p3++;
        } else if (temp >= 600 && temp <= 799) {
            p4++;
        } else {
            p5++;
        }
    }
    printf("Up to 200: %.2f%%\n", (p1 / (float)n) * 100);
    printf("200 - 399: %.2f%%\n", (p2 / (float)n) * 100);
    printf("400 - 599: %.2f%%\n", (p3 / (float)n) * 100);
    printf("600 - 799: %.2f%%\n", (p4 / (float)n) * 100);
    printf("800 and above: %.2f%%\n", (p5 / (float)n) * 100);

    return 0;
}
