#include <stdio.h>

int main() {
    int choice;
    float rate;

    printf("Currency Converter to INR\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. GBP\n");
    printf("4. AUD\n");
    printf("5. JPY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            rate = 84.50;  
            printf("1 USD = %.2f INR\n", rate);
            break;

        case 2:
            rate = 92.30;  
            printf("1 EUR = %.2f INR\n", rate);
            break;

        case 3:
            rate = 108.75; 
            printf("1 GBP = %.2f INR\n", rate);
            break;

        case 4:
            rate = 56.40;  
            printf("1 AUD = %.2f INR\n", rate);
            break;

        case 5:
            rate = 0.57;   
            printf("1 JPY = %.2f INR\n", rate);
            break;

        default:
            printf("Invalid currency choice!\n");
            break;
    }

    return 0;
}