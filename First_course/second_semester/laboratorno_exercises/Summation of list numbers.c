#include <stdio.h>

int main() {

    int arr[7];

    for (int i = 0; i<7; i++){
        while (i){
            int num;
            printf("Type a number between -5000 and 5000: ");
            scanf("%d", &num);
            if (num >= -5000 && num <= 5000){
                arr[i] = num;
                break;
            } else {
                printf("Problem! Type a number between -5000 and 5000!\n");
            }
        }
    }
    int suma = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < size; j++){
        suma += arr[j];
    }
    printf("The sum of the array is %d", suma);
    return 0;
}
