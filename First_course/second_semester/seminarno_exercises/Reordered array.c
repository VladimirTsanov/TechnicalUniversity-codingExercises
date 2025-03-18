#include <stdio.h>

void reorderArray(int arr[], int k, int n) {
    
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int k = 1;
    
    reorderArray(arr, k, n);
    
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
