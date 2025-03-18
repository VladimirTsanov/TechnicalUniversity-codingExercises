#include <stdio.h>

int main(){
    float a, lowest, biggest;

    printf("Type one number: ");
    scanf("%f", &a);
    lowest = biggest = a;

    while (1) {
        printf("Type a number (or 0 to stop): ");
        scanf("%f", &a);

        if (a == 0) {
            break;
        }
        if (a < lowest) {
            lowest = a;
        }
        if (a > biggest) {
            biggest = a;
        }
    }
    printf("The max is %.2f\n", biggest);
    printf("The min is %.2f\n", lowest);

    return 0;
}
