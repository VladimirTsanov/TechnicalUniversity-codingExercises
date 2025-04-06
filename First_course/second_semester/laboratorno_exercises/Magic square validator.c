#include <stdio.h>

int isMagic(int n, int arr[n][n]){

    int magicSum = 0;

    for (int j = 0; j < n; j++) {
        magicSum += arr[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum != magicSum) return 0;

    }

    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += arr[i][j];
        }
        if (colSum != magicSum) return 0;

    }
    return 1;
}

int main(){
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
    printf("The matrix is filled!\n");

    if(isMagic(n, arr)){
        printf("The square is magical!");
    } else {
        printf("The square is not magical!");
    }



    return 0;
}
