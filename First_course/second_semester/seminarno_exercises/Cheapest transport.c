#include <stdio.h>

int main() {
    int n = 0;
    char str[2];
    float price = 0;

    while (1){
        printf("Type kilometers: ");
        scanf("%d", &n);
        printf("Type a D for day or N for night: ");
        scanf("%s", str);

        if (n>0 && (str[0]== 'D'|| str[0]== 'N')){
            break;
        }
    }

    if (n < 20) {
        if (str[0] == "N"){
            price = 0.70 + (0.90 * n);
        } else {
            price = 0.70 + (0.79 * n);
        }
    } else if (n <= 100 && n >=20) {
        price = 0.09 * n;
    } else if (n >100){
        price = 0.06 * n;
    }
    
    printf("The cheapest price will be %.2f", price);

    return 0;
}
