#include <stdio.h>

int main() {
    float gradus1;
    float radians;
    printf("Type degrees: ");
    scanf(" %f", &gradus1);
    radians = gradus1 * 0.0174;
    printf("%.2f degrees is %.2f radians\n", gradus1, radians);
    return 0;
}
