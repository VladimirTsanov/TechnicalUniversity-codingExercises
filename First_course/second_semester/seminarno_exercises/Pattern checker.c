#include <stdio.h>

int main() {
    int n;
    
    while(1){
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        if (n>0){
            break;
        }
        print("Error! Type positive number!");
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Type a number: ");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n - 1; j++) {
        if (j % 2 == 0) {
            if (!(arr[j] < arr[j + 1])) {
                printf("There is a mistake in the comparisons at index %d\n", j);
                n = 0;
                break;
            }
        } else {
            if (!(arr[j] > arr[j - 1])) {
                printf("There is a mistake in the comparisons at index %d\n", j);
                n = 0;
                break;
            }
        }
    }

    if (n != 0) {
        printf("The pattern is followed correctly!\n");
    }

    return 0;
}
