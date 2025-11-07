#include <stdio.h>

// Function declarations
int menu();
void itemSelected(int choice);
double itemCost(int choice);
double totalPrice(double price, int qty);
double payment(double cost);

int main() {
    int choice, quantity;
    double price, cost, change;

    printf("------ Welcome to Smart Vending Machine ------\n");

    // Get selection
    choice = menu();
    itemSelected(choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);// Calculate cost and process payment
        price = itemCost(choice);
        cost = totalPrice(price, quantity);
        change = payment(cost);
    
        printf("\nThank you for your purchase!\n");
        printf("Total cost: ₹%.2f\n", cost);
        printf("Change returned: ₹%.2f\n", change);
    
        printf("---------- Have a great day! ----------\n");
        return 0;
    }
    
    // Function to display menu
    int menu() {
        int choice;
        printf("\nAvailable items:\n");
        printf("1. Soda       - ₹30.00\n");
        printf("2. Chips      - ₹20.00\n");
        printf("3. Chocolate  - ₹25.00\n");
        printf("4. Water      - ₹15.00\n");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);
        return choice;
    }// Display selected item
    void itemSelected(int choice) {
        printf("\nYou selected ");
        switch(choice) {
            case 1: printf("Soda"); break;
            case 2: printf("Chips"); break;
            case 3: printf("Chocolate"); break;
            case 4: printf("Water"); break;
            default: printf("Invalid item");
        }
        printf("\n");
    }
    
    // Function to assign cost
    double itemCost(int choice) {
        switch(choice) {
            case 1: return 30.0;
            case 2: return 20.0;
            case 3: return 25.0;
            case 4: return 15.0;
            default: return 0.0;
        }
    }// Calculate total price
    double totalPrice(double price, int qty) {
        return price * qty;
    }
    
    // Process payment
    double payment(double cost) {
        double money;
        printf("Enter money: ₹");
        scanf("%lf", &money);
    
        while(money < cost) {
            printf("Insufficient funds. Please add ₹%.2f more: ", cost - money);
            double more;
            scanf("%lf", &more);
            money += more;
        }
    
        return money - cost;  // Return change
    }