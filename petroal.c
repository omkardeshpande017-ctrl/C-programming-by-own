#include <stdio.h>

int main() {
    float petrol_price = 102.50;  // Price per liter for petrol
    float diesel_price = 89.75;   // Price per liter for diesel
    int choice;
    float liters, total_cost;

    printf("\n=== Welcome to Petrol Pump ===\n");
    printf("1. Petrol (₹%.2f/liter)\n", petrol_price);
    printf("2. Diesel (₹%.2f/liter)\n", diesel_price);
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    printf("Enter number of liters: ");
    scanf("%f", &liters);

    switch(choice) {
        case 1:
            total_cost = liters * petrol_price;
            printf("\n=== Billing Details ===\n");
            printf("Fuel Type: Petrol\n");
            printf("Price per liter: ₹%.2f\n", petrol_price);
            printf("Liters filled: %.2f\n", liters);
            printf("Total Amount: ₹%.2f\n", total_cost);
            break;

        case 2:
            total_cost = liters * diesel_price;
            printf("\n=== Billing Details ===\n");
            printf("Fuel Type: Diesel\n");
            printf("Price per liter: ₹%.2f\n", diesel_price);
            printf("Liters filled: %.2f\n", liters);
            printf("Total Amount: ₹%.2f\n", total_cost);
            break;

        default:
            printf("Invalid choice! Please select 1 for Petrol or 2 for Diesel.\n");
            return 1;
    }

    printf("\nThank you for visiting!\n");
    return 0;
}
