#include <stdio.h>

int main()
{
    int a;
    printf("Type a whole number: ");
    scanf("%d",&a);
    if (a % 2 == 0){
        printf("The number %d is even", a);
    } else {
        printf("The number %d is odd", a);
    }
}
