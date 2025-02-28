#include <stdio.h>

int main() {
    int counter = 0;
    float suma = 0.0, number = -1.0;
    printf("Type whole numbers as many as you want /type 0 to stop/:\n");

    while(1) {
          scanf("%f", &number);
          if (number == 0) {
              break;
          }
          suma += number;
          counter++;
    }
    printf("The sum of the numbers is %.2f\n", suma);
    printf("The average is %.2f\n", suma / counter);
    
    return 0;
}
