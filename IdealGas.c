#include <stdio.h>

int main() {
    float volume, moles, temperature, pressure;
    const float R = 8.314; // Ideal gas constant J/mol·K

    printf("Enter volume (in liters): ");
    scanf("%f", &volume);

    printf("Enter moles of gas (n): ");
    scanf("%f", &moles);

    printf("Enter temperature (in Kelvin): ");
    scanf("%f", &temperature);

    if (volume <= 0 || temperature <= 0) {
        printf("Volume and Temperature must be greater than zero.\n");
    } else {
        pressure = (moles * R * temperature) / volume;
        printf("Pressure (P) = %.2f Pascal\n", pressure);
    }

    return 0;
}
