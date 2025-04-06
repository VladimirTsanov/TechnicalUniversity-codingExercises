#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n=0, m=0;
    int *arr, *arr2;

    while(1){
        printf("Type a positive num for n: ");
        scanf("%d", &n);
        printf("Type a positive num for m: ");
        scanf("%d", &m);
        if (n > 0 && m >0){
            break;
        } else {
            printf("Try again\n");
        }
    }

    arr = (int*) malloc(n*sizeof(int));
    arr2 = (int*) malloc(m*sizeof(int));

    if(arr == NULL || arr2 == NULL) {
        printf("Error! memory not allocated.");
        exit(1);
    }

    printf("Type numbers for the first array:\n");
    for(int i = 0; i<n; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Type numbers for the second array:\n");
    for(int i = 0; i<m; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    int *arr3 = NULL;

    arr3 = (int*) malloc((n+m) * sizeof(int));

    if (arr3 == NULL){
        printf("Memory allocation failed!");
        free(arr);
        free(arr2);
        exit(1);
    }

    for (int i = 0; i < n; i++){
        arr3[i] = arr[i];
    }
    for (int i = 0; i < m; i++){
        arr3[n+i] = arr2[i];
    }

    qsort(arr3, n + m, sizeof(int), compare);

    printf("Sorted merged array: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    free(arr);
    free(arr2);
    free(arr3);

    return 0;
}
