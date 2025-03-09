#include <stdio.h>

int main() {
    int var = 3;
    int *c;

    c = &var;
    printf("Variable's address is: %x\n", &var);
    printf("Address in the variable c: %x\n", c);
    printf("Value of the variable *c: %d\n", *c);

    return 0;
}
