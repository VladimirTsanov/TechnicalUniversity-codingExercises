#include <stdio.h>

int main() {

    int n = 0;
    while(1){
        printf("Type the quantity of the elements you will enter in the array.");
        scanf("%d", &n);
        if (n>0){
            break;
        }
    }
    int arr[n];
    for (int i = 0; i <= n; i++){
        printf("Type a number: ");
        scanf("%d", &arr[i]);
    }

    int startIndex = 0;
    int maxLength = 1;

    int currentStart = 0;
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = currentStart;
            }
            currentStart = i;
            currentLength = 1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        startIndex = currentStart;
    }

    printf("Longest sequence starts at index %d with length %d\n", startIndex, maxLength);

    return 0;
}
