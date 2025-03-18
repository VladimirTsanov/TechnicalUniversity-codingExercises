#include <stdio.h>

void bubbleSortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 5;
    int arr[5];
    int k = 0;

    for (int i = 0; i < n; i++) {
        printf("Type a number: ");
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("Type a num for k: ");
        scanf("%d", &k);
        if (k <= n) {
            break;
        } else {
            printf("K should be equal or smaller than n!\n");
        }
    }

    bubbleSortDesc(arr, n);

    printf("The %d-th largest element is %d\n", k, arr[k - 1]);

    return 0;
}
