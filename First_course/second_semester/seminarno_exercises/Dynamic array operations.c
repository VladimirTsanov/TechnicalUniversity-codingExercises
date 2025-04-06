#include <stdio.h>

void add(int arr[], int *size, int x) {
    arr[*size] = x;
    (*size)++;
    printf("The element %d was appended!\n", x);
}

void del(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index to delete!\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    printf("Element at index %d was deleted!\n", index);
}

void smallest(const int arr[], int size, int x) {
    if (x <= 0 || x > size) {
        printf("Invalid value for x!\n");
        return;
    }

    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (temp[j] < temp[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int tempVar = temp[i];
            temp[i] = temp[minIndex];
            temp[minIndex] = tempVar;
        }
    }

    printf("The %d-th smallest number is: %d\n", x, temp[x - 1]);
}

int main() {
    int arr[100];
    int size = 0;

    printf("The array is currently empty.\n");

    add(arr, &size, 7);
    add(arr, &size, 2);
    add(arr, &size, 9);
    add(arr, &size, 1);
    add(arr, &size, 5);

    printf("The array after additions:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    del(arr, &size, 2);

    printf("The array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    smallest(arr, size, 2);

    return 0;
}
