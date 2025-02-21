#include <stdio.h>

int main()
{
    float a, b;
    printf("Type a number for a: ");
    scanf("%f",&a);
    printf("Type a number for b: ");
    scanf("%f",&b);
    printf("The sum is %.2f\n", a+b);
    printf("The difference is %.2f\n", a - b);
    printf("The multiplication is %.2f\n", a*b);
    printf("The division is %.2f", a/b);
    return 0;

}
