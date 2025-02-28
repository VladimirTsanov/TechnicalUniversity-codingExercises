#include <stdio.h>

int main() {
        float a, b, c;
        printf("Type first number: ");
        scanf("%f", &a);
        printf("Type second number: ");
        scanf("%f", &b);
        printf("Type third number: ");
        scanf("%f", &c);

        while(1){
            if (a <= 0) {
                printf("Type first number again, which is positive: ");
                scanf("%f", &a);
            } else {
                break;
            }
        }
        while(1){
            if (b <= 0) {
                printf("Type second number again, which is positive: ");
                scanf("%f", &b);
            } else {
                break;
            }
        }
        while(1){
            if (c <= 0) {
                printf("Type third number again, which is positive: ");
                scanf("%f", &c);
            } else {
                break;
            }
        }

        if (a + b > c && a + c > b && c + b > a){
            printf("The numbers can be sides of a triangle\n");
            if (a == b && a == c) {
                printf("The triangle is with equal sides");
            } else if (a == b || a == c || b == c) {
                printf("The triangle is isosceles");
            } else {
                printf("The triangle is various");
            }
        } else {
            printf("The numbers can't be sides of a triangle\n");
        }
        return 0;
}
