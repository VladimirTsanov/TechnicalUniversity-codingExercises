#include <stdio.h>

int main() {
    float gradus1;
    float gradus2;
    printf("Type degrees in Celsius: ");
    scanf(" %f", &gradus1);
    gradus2 = gradus1 * 33.8;
    printf("%.2f degrees in Celisius is %.2f degrees in Farenhait\n", gradus1, gradus2);
    return 0;
}
