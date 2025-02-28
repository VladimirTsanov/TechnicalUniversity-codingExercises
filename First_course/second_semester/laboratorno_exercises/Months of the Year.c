#include <stdio.h>

int main() {
        int num;
        printf("Type a number from 1 to 12: ");
        scanf("%d", &num);
        while(1){
            if (num < 1 || num > 12){
                printf("You must enter a whole number from 1 to 12!\n");
                printf("Type a number from 1 to 12: ");
                scanf("%d", &num);
            }
            break;
        }
        switch (num) {
          case 1:
            printf("January(Winter)\n");
            break;
          case 2:
            printf("February(Winter)\n");
            break;
          case 3:
            printf("March(Winter)\n");
            break;
          case 4:
            printf("April(Spring)\n");
            break;
          case 5:
            printf("May(Spring)\n");
            break;
          case 6:
            printf("June(Spring)\n");
            break;
          case 7:
            printf("July(Summer)\n");
            break;
          case 8:
            printf("August(Summer)\n");
            break;
          case 9:
            printf("September(Summer)\n");
            break;
          case 10:
            printf("October(Autumn)\n");
            break;
          case 11:
            printf("November(Autumn)\n");
            break;
          case 12:
            printf("December(Autumn)\n");
            break;
        }    
    
    return 0;
}
