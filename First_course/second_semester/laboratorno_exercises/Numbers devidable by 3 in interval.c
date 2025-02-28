#include <stdio.h>

int main() {
        int a, b;
        printf("Type first number: ");
        scanf("%d", &a);
        printf("Type second number, bigger that the first: ");
        scanf("%d", &b);
        
        if (a < b) {
            for (int i = a; i<b; i++) {
                if (i % 3 == 0){
                    printf("%d ", i);
                }
            }
        } else {
            printf("The first number is bigger than the second one")
        }
    
    return 0;
}
