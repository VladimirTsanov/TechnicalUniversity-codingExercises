#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Type a number for a: ");
    scanf("%f", &a);
    printf("Type a number for b: ");
    scanf("%f", &b);
    printf("Type a number for c: ");
    scanf("%f", &c);

    float max = a;
    
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    printf("The biggest number is %f", max);
    return 0;
}
