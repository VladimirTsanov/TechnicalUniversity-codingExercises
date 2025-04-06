#include <stdio.h>

int main() {
    int n = 4, m = 5, broy = 0;
    int arr[4][5];

    for (int rows = 0; rows < n; rows++) {
        for (int cols = 0; cols < m; cols++) {
            arr[rows][cols] = ++broy;
        }
    }

    printf("The array:\n");
    for (int rows = 0; rows < n; rows++) {
        for (int cols = 0; cols < m; cols++) {
            printf("%d ", arr[rows][cols]);
        }
        printf("\n");
    }

    int tempArr[m];
    for (int cols = 0; cols < m; cols++) {
        tempArr[cols] = arr[0][cols];
    }

    for (int cols = 0; cols < m; cols++) {
        arr[0][cols] = arr[n - 1][cols];
        arr[n - 1][cols] = tempArr[cols];
    }

    printf("The array after swapping first and last row:\n");
    for (int rows = 0; rows < n; rows++) {
        for (int cols = 0; cols < m; cols++) {
            printf("%d ", arr[rows][cols]);
        }
        printf("\n");
    }

    return 0;
}
