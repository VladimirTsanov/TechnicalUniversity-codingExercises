#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, m = 0;
    int *arr, *arr2;

    while(1) {
        printf("Type a positive num for n: ");
        scanf("%d", &n);
        printf("Type a positive num for m: ");
        scanf("%d", &m);
        if (n > 0 && m > 0) {
            break;
        } else {
            printf("Try again\n");
        }
    }

    arr = (int*) malloc(n * sizeof(int));
    arr2 = (int*) malloc(m * sizeof(int));

    if (arr == NULL || arr2 == NULL) {
        printf("Error! memory not allocated.");
        exit(1);
    }

    int sum = 0;
    printf("Type numbers for the first array:\n");
    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", arr + i);
        sum += *(arr + i);
    }
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum / n);

    sum = 0;
    printf("Type numbers for the second array:\n");
    for(int i = 0; i < m; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", arr2 + i);
        sum += *(arr2 + i);
    }

    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum / m);

    free(arr);
    free(arr2);

    return 0;
}
