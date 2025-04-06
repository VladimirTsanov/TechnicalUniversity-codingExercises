#include <stdio.h>
#include <stdlib.h>

void printPascalsTriangle(int n) {

    int **arr = (int**) malloc(n * sizeof(int*));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (int*) malloc((i + 1) * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        arr[i][0] = arr[i][i] = 1;

        for (int j = 1; j < i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    printf("Pascal's Triangle:\n");
    for (int i = 0; i < n; i++) {

        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of rows must be positive!\n");
        return 1;
    }

    printPascalsTriangle(n);

    return 0;
}
