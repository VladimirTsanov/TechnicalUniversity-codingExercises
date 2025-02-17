#include <stdio.h>

int main() {
    char myChr;
    printf("Type a character: ");
    scanf(" %c", &myChr);
    printf("\n");
    printf("%5c\n", myChr);
    printf("%4c %1c\n", myChr);
    printf("%3c %3c\n", myChr);
    printf("%2c %5c\n", myChr);
    for (int i = 1; i<=9; i++){
        printf("%c", myChr);
    }
    return 0;
}
