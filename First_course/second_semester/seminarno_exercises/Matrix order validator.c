#include <stdio.h>


int checkColumnsDescending(int i, int j, int arr[i][j]){

    for (int col = 0; col < j; col++) {
        for (int row = 0; row < i - 1; row++) {
            if (arr[row][col] < arr[row + 1][col]) {
                return 0;
            }
        }
    }
    return 1;
}

int checkRowsAscending(int i, int j, int arr[i][j]) {
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j - 1; col++) {
            if (arr[row][col] > arr[row][col + 1]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {

    int arr[3][3] = {
        {1, 6, 8},
        {2, 5, 7},
        {3, 4, 6}
    };

    if (checkColumnsDescending(3, 3, arr)){
        printf("All columns are in descending order.\n");
    } else {
        printf("Not all columns are in descending order.\n");
    }

    if (checkRowsAscending(3, 3, arr)){
        printf("All rows are in ascending order.\n");
    } else {
        printf("Not all columns are in ascending order.\n");
    }

    return 0;
}
