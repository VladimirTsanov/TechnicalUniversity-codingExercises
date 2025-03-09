#include <stdio.h>

int digitCounter(int x) {
    if (x == 0) return 1;
    int counter = 0;
    while (x != 0) {
        x = x / 10;
        counter++;
    }
    return counter;
}

int main(){
    int a;
    printf("Type a number: ");
    scanf("%d", &a);
    printf("The number of digits in the number is %d", digitCounter(a));

    return 0;
}
