#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int *arr;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);


    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of additional elements (m): ");
    scanf("%d", &m);

    if (m > 0) {

        arr = (int*) realloc(arr, (n + m) * sizeof(int));
        if (arr == NULL) {
            printf("Memory reallocation failed!\n");
            return 1;
        }

        printf("Enter %d additional elements:\n", m);
        for (int i = n; i < n + m; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        n= n + m;
    }

    printf("The final array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
