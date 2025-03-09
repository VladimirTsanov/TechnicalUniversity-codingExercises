#include <stdio.h>

int sumDigit(int x){
    int sum = 0;
    while (x > 0){
        int lastDigit = x % 10;
        x /= 10;
        sum += lastDigit;
    }
    return sum;
}

int main() {
    int a;
    printf("Type number: ");
    scanf("%d", &a);
    printf("%d", sumDigit(a));
    return 0;
}
