#include <stdio.h>

int main () {
    int x = 7;
    int y = 8;
    int *c, *d;

    c = &x;
    d = &y;

    printf("The value of x before is %d\n", *c);
    printf("The value of y before is %d\n",*d);

    *c=*c + *d;
    *d=*c - *d;
    *c=*c - *d;

    printf("The value of x after is %d\n", *c);
    printf("The value of y after is %d\n",*d);

    return 0;
}
