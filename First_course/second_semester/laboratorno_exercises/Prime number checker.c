#include <stdio.h>
#include <stdbool.h>

bool simpleNum(int a){
    if (a < 2) return false;
    for (int i = 2; i*i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    printf("Type a number: ");
    scanf("%d", &x);
    if (simpleNum(x) == true){
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
