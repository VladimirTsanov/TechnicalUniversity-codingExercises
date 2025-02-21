#include <stdio.h>

int main()
{
    int n;
    int chislo;
    
    printf("Enter a whole number: ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        chislo = n%10;
        printf("%d\n", chislo);
        n=n/10;
    }
    return 0;
}
