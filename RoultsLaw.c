#include <stdio.h>

int main() {
    float x1, x2;
    float p1_pure, p2_pure;
    float p_total;

    printf("Enter mole fraction of component 1 (X1): ");
    scanf("%f", &x1);

    // Mole fraction of component 2
    x2 = 1.0 - x1;

    printf("Enter vapor pressure of pure component 1 (P1^0) in atm: ");
    scanf("%f", &p1_pure);

    printf("Enter vapor pressure of pure component 2 (P2^0) in atm: ");
    scanf("%f", &p2_pure);

    if (x1 < 0 || x1 > 1) {
        printf("Invalid mole fraction for component 1. It must be between 0 and 1.\n");
    } else {
        p_total = (x1 * p1_pure) + (x2 * p2_pure);
        printf("Total vapor pressure of the solution: %.3f atm\n", p_total);
    }

    return 0;
}
