#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Type a whole number for a: ");
    scanf("%d",&a);
    printf("Type a whole number for b: ");
    scanf("%d",&b);
    int sum = a + b;
    printf("The sum is %d", sum);
}
