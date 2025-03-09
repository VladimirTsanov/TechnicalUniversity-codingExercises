#include <stdio.h>

int binary(int x) {
    int binNum = 0;
    int place = 1;

    while (x > 0) {
        int ostatuk = x % 2;
        binNum += ostatuk * place;
        x /= 2;
        place *= 10;
    }
    return binNum;
}

int main() {
    int a;
    printf("Type a number: ");
    scanf("%d", &a);
    printf("The binary of the number is %d", binary(a));

    return 0;
}
