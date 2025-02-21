#include <stdio.h>

int main()
{
    int year;
    printf("Type a whole number year: ");
    scanf("%d", &year);

    if (year % 4 == 0 || (year % 4 == 0 && year % 400 == 0)) {
        printf("The year %d is leap", year);
    } else {
        printf("The year %d is not leap", year);
    }
    return 0;
}
