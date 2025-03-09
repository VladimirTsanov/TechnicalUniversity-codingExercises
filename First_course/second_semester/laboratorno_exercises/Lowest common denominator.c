#include <stdio.h>
int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int x,y;
    printf("Type a one number: ");
    scanf("%d", &x);
    printf("Type another number: ");
    scanf("%d", &y);

    printf("%d", nod(x,y));

    return 0;
}
