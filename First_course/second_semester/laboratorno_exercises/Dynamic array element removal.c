#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, *arr = NULL, num = 1, found = 0;

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory Allocation Error\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = num;
        ++num;
    }

    printf("The array with numbers is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nType a number from the list to remove: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }

    if (!found) {
        printf("The number does not exist in the array!\n");
    } else {
        int *tmp = realloc(arr, n * sizeof(int));
        if (tmp == NULL && n > 0) {
            printf("Memory reallocation failed!\n");
            free(arr);
            exit(1);
        } else {
            arr = tmp;
        }

        printf("The new array with numbers is: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    free(arr);

    return 0;
}
