#include <stdio.h>

int main() {

    float cubic, pipe1, pipe2 = 0.0;
    int hours = 0;

    while(1) {
        printf("Type the capacity of the pool/in cubic metres/ and the debit of the two pipes/in litres/ with spaces: ");
        scanf("%f %f %f", &cubic, &pipe1, &pipe2);
        printf("Type the hours: ");
        scanf("%d", &hours);
        if (hours > 0 && cubic > 0 && pipe1 > 0 && pipe2 > 0){
             break;
        }
        printf("Type positive values!");    
    }
    float sumaPipesHours = (cubic * 1000) * (pipe1 + pipe);
    printf("The water in the pool after %d will be %.2f litres", hours, sumaPipesHours);

    return 0;
}
