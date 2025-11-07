#include <stdio.h>

int main() {
    float temp, convertedTemp;
    char choice;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    printf("Convert to (C)elsius or (F)ahrenheit? Enter C or F: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        convertedTemp = (temp - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius\n", temp, convertedTemp);
    } else if (choice == 'F' || choice == 'f') {
        convertedTemp = (temp * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", temp, convertedTemp);
    } else {
        printf("Invalid choice. Please enter C or F.\n");
    }
    return 0;
}
