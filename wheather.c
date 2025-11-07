#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the current temperature (in °C): ");
    scanf("%d", &temperature);

    if (temperature > 40) {
        printf("It's extremely hot outside. Stay hydrated and avoid direct sunlight.\n");
    } else if (temperature > 30) {
        printf("It's hot today. Wear light clothes and drink plenty of water.\n");
    } else if (temperature > 20) {
        printf("The weather is warm and pleasant.\n");
    } else if (temperature > 10) {
        printf("It's a bit cool. You might need a light jacket.\n");
    } else if (temperature > 0) {
        printf("It's cold outside. Wear warm clothes.\n");
    } else {
        printf("It's freezing! Stay indoors and keep warm.\n");
    }

    return 0;
}
