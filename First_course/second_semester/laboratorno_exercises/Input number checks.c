#include <stdio.h>
int main() {

    int num;
    printf("Type a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    if (num < 0) {
        printf("The number is negative\n");
    } else if (num > 0){
        printf("The number is positive\n");
    } else {
        printf("The number is zero\n");
    }
    if (num % 3 == 0 && num % 5 == 0){
        printf("The number is dividable by 3 and 5\n");
    } else {
        printf("The number is not dividable neither 3 nor 5 or one of them\n");
    }
    return 0;
}
