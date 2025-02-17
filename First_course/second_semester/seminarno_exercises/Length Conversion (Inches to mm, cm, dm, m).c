#include <stdio.h>
#include <string.h>

int main() {
    float lenght;
    char secLenght[10];
    float convertedLenght;

    printf("Type a length in inches: ");
    scanf("%f", &lenght);

    printf("Choose a measurement unit (cm, mm, dm, m): ");
    scanf("%s", secLenght);

    if (strcmp(secLenght, "mm") == 0) {
        convertedLenght = lenght * 25.4;
    } else if (strcmp(secLenght, "cm") == 0) {
        convertedLenght = lenght * 2.54;
    }
    else if (strcmp(secLenght, "dm") == 0) {
        convertedLenght = lenght * 0.254;
    }
    else if (strcmp(secLenght, "m") == 0) {
        convertedLenght = lenght * 0.0254;
    }
    else {
        printf("Please, type the unit correctly!\n");
        return 1;
    }

    printf("Your converted length is %.2f %s\n", convertedLenght, secLenght);
    return 0;
}
