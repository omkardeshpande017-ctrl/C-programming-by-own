#include <stdio.h>

int main() {
    float voltage, resistance, current;

    printf("Enter voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter resistance (R): ");
    scanf("%f", &resistance);

    if (resistance == 0) {
        printf("Resistance cannot be zero to avoid division by zero.\n");
    } else {
        current = voltage / resistance;
        printf("Current (I) = %.2f Amperes\n", current);
    }

    return 0;
}
