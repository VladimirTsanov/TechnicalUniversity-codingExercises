#include <stdio.h>

int main() {
    float area, kgGrapesPerSqM, litersVine, totalKgVine, possibleLiters;
    int workers;

    do {
        printf("Enter area (m²), grapes per m², and liters of wine needed: ");
        scanf("%f %f %f", &area, &kgGrapesPerSqM, &litersVine);
        printf("Enter number of workers: ");
        scanf("%d", &workers);

        if (area <= 0 || kgGrapesPerSqM <= 0 || litersVine <= 0 || workers <= 0) {
            printf("Error: Values must be positive!\n");
        }
    } while (area <= 0 || kgGrapesPerSqM <= 0 || litersVine <= 0 || workers <= 0);

    totalKgVine = kgGrapesPerSqM * area;
    possibleLiters = 2.5 * (0.4 * totalKgVine);
    
    if (litersVine == forVinePossibleLiters){
        printf("It can be produced %.2f liters of wine. The quantity of the vine is exactly enough.\n", forVinePossibleLiters);
    } else if (litersVine < forVinePossibleLiters){
        float perWorker = forVinePossibleLiters / workers;
        printf("It can be produced %.2f liters of wine. The quantity of the vine is more and the rest can be separated by %.2f per worker\n", forVinePossibleLiters, perWorker);
    } else {
        printf("It can be produced %.2f liters of wine. The quantity of the vine is not enough.\n", forVinePossibleLiters);
    }

    return 0;
}
