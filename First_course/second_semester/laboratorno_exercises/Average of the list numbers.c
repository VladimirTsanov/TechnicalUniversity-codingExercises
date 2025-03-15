#include <stdio.h>

int main() {

    int arr[7];
    float suma = 0.0;

    for (int i = 0; i<7; i++){
        while (i < 7){
            int num;
            printf("Type a number between -5000 and 5000: ");
            scanf("%d", &num);
            if (num >= -5000 && num <= 5000){
                arr[i] = num;
                suma += num;
                break;
            } else {
                printf("Problem! Type a number between -5000 and 5000!\n");
            }
        }
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The average of the list is %.2f\n", suma/size);
    return 0;
}
