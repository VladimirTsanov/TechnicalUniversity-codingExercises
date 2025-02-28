#include <stdio.h>

int main() {
        int a = 1, b = 0;
        int num;

        printf("Type a number for maximum of the Fibonacci sequence: ");
        scanf("%d", &num);

        if (num) {
            printf("The Fibonacci sequence: ");
        }

        for (int i = 1; i<num; i++) {
            if (a <= num) {
                printf("%d ", a);
                int temp = a;
                a = a + b;
                b = temp;
            } else {
                break;
            }
        }
    
    return 0;
}
