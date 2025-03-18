#include <stdio.h>

int main() {
    int vreme1, vreme2, vreme3 = 0;

    while (1) {
        printf("Type the times with spaces: ");
        scanf("%d %d %d", &vreme1, &vreme2, &vreme3);
        if (vreme1 > 1 && vreme1 < 59 && vreme2 > 1 && vreme2 < 59 && vreme3 > 1 && vreme3 < 59 ) {
            break;
        }
    }
    int suma = vreme1 + vreme2 + vreme3;
    int min = suma / 60;
    int sec = suma % 60;

    if (sec >= 1 && sec <= 9) {
        printf("%d:0%d\n", min, sec);
    } else {
        printf("%d:%d\n", min, sec);
    }

    return 0;
}
