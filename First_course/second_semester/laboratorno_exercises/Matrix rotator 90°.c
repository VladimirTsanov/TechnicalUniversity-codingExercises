#include <stdio.h>

void rotateMatrix90degClockwise(int n, int arr[n][n]){
    int matrix[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[j][n-i-1] = arr[i][j];
        }

    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = matrix[i][j];
        }
    }

}

int main() {
    int n = 0;
    printf("Type a number for the length of the matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Type a number for row %d and column %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }

    }
    printf("The matrix is filled:\n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");

    }
    rotateMatrix90degClockwise(n, arr);
    
    printf("The rotated matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
