#include <stdio.h>

float calculate(int *a, int *b) {
    if (*b == 0) {
        float *quotient = 0;
    }

    printf("Summation: %d\n", *a + *b);
    printf("Difference: %d\n", *a - *b);
    printf("Multiplication: %d\n", (*a) * (*b));
    printf("Division: %.2f\n", (float)(*a) / (*b));

    if (b == 0) {
        printf("Division by 0 is not possible");
    }
    return 0;
}

int main() {
    int num1, num2;

    printf("Type first number: ");
    scanf("%d", &num1);
    printf("Type second number: ");
    scanf("%d", &num2);

    calculate(&num1, &num2);

    return 0;
}
