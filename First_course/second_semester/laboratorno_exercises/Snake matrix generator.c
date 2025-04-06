#include <stdio.h>

int main(){
    int m = 0, n = 0;

    printf("Type a number for the rows: ");
    scanf("%d", &m);
    printf("Type a number for the columns: ");
    scanf("%d", &n);

    int arr[m][n];
    int num = 1;

    for (int i = 0; i < m; i++){
        if (i%2==0){
            for(int j = 0; j < n; j++){
                arr[i][j] = num++;
            }

        } else {
            for(int j = n-1; j >= 0; j--){
                arr[i][j] = num++;
            }
        }
    }
    printf("The Matrix:\n");
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
