#include <stdio.h>

int main() {
    int hour, minutes;

    while (1) {
        printf("Type an hour /from 0 to 23/ and minutes /from 0 to 59/: ");
        scanf("%d %d", &hour, &minutes);
        if (hour <=23 && hour >=0 && minutes <= 59 && minutes >= 0){
            break;
        }
        printf("You should type a correct numbers!");
    }
    int minutesEdith = minutes+15;
    
    if (minutesEdith > 59) {
        minutesEdith = minutesEdith - 60;
        hour += 1;
    }
    if (hour > 23) {
        hour = 0;
    }
    if (minutesEdith >= 0 && minutesEdith <=9){
        printf("%d:0%d", hour, minutesEdith);
    } else {
        printf("%d:%d", hour, minutesEdith);
    }
    return 0;
}
