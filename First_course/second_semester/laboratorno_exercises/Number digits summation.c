#include <stdio.h>

int main()
{
    int num;

    printf("Type a 4 digit number: ");
    scanf("%d", &num);

    int sum = num%10+(num/10)%10 + (num/100)%10 + (num/1000)%10;
    printf("The sum of the digits is %d\n", sum);
    return 0;
}
