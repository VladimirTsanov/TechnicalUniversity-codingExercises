#include <stdio.h>

void mainDiagonalPrinting(int n, int arr[n][n]){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i][i]);
    }
    printf("\n");
}

void submainDiagonalPrinting(int n, int arr[n][n]){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i][n - 1 - i]);
    }
    printf("\n");
}

void abovemainDiagonalPrinting(int n, int arr[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

void belowmainDiagonalPrinting(int n, int arr[n][n]){
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}

int main () {
    int n;
    printf("Type a number for the length of the matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Type a number for row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix is filled!\n\n");

    printf("The elements on the main diagonal are: ");
    mainDiagonalPrinting(n, arr);
    printf("The elements on the secondary diagonal are: ");
    submainDiagonalPrinting(n, arr);
    printf("The elements above the main diagonal are: ");
    abovemainDiagonalPrinting(n, arr);
    printf("The elements below the main diagonal are: ");
    belowmainDiagonalPrinting(n, arr);

    return 0;
}
