#include <stdio.h>

int main() {
    int a,b,c;

    printf("Type three whole numbers with a space between: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
