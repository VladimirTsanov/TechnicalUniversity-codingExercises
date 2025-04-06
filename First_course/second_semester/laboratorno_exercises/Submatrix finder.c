#include <stdio.h>

int isMatrixBinMatrixA(int r, int c, int p, int q, int arrA[r][c], int arrB[p][q]) {
    for (int i = 0; i <= r - p; i++) {
        for (int j = 0; j <= c - q; j++) {
            int match = 1;
            
            for (int k = 0; k < p; k++) {
                for (int z = 0; z < q; z++) {
                    if (arrA[i + k][j + z] != arrB[k][z]) {
                        match = 0;
                        break;
                    }
                }
                if (!match) break;
            }
            
            if (match) return 1;
        }
    }
    return 0;

int main() {
    int r = 4, c = 4, p = 2, q = 2;

    int matrixA[r][c], matrixB[p][q];
    int numCount = 1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrixA[i][j] = numCount;
            if (i < p && j < q) {
                matrixB[i][j] = numCount;
            }
            ++numCount;
        }
    }

    printf("The matrix A is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("The matrix B is:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    if (isMatrixBinMatrixA(r, c, p, q, matrixA, matrixB)) {
        printf("The matrix B is inside the matrix A\n");
    } else {
        printf("The matrix B is not inside the matrix A\n");
    }

    return 0;
}
