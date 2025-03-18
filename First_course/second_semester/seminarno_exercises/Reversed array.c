#include <stdio.h>

void reverseArray(int arr[], int n) {
    int temp[n];

    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];

    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    reverseArray(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
