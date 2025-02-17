#include <stdio.h>

int main() {
    float leva;
    float euros;
    float dollars;
    float paunds;

    printf("Type your ammount in leva: ");
    scanf(" %f", &leva);
    euros = leva * 0.51;
    dollars = leva * 0.54;
    paunds = leva * 0.43;
    printf("%.2f leva is %.2f euros, %.2f dollars, %.2f pounds", leva, euros, dollars, paunds);
    return 0;
}
