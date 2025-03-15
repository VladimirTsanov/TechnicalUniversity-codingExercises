#include <stdio.h>
#include <stdlib.h>

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
    float avg = suma/size;

    int closest = arr[0];
    int pos = 0;
    float minDiff = abs(avg - arr[0]);

    for (int i = 1; i < suma; i++) {
        float diff = abs(avg - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            closest = arr[i];
            pos=i;
        }

    }
    printf("The average is %.2f\n", avg);
    printf("The number nearest or equal to %.2f is %d on position %d in the list\n", avg, closest, pos+1);
    return 0;
}
