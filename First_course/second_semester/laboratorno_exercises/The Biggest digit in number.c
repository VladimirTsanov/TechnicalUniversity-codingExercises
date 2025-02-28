#include <stdio.h>

int main() {
        int a, b = 0;
        printf("Type a whole number: ");
        scanf("%d", &a);

        while (a != 0) {
            if (b <= a%10) {
                b = a % 10;
            }
            a /= 10;
        }
        printf("The biggest digit in the number is %d\n", b);
    
    return 0;
}
