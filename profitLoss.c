#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float difference, percentage;
    
    // Input cost price and selling price
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);
    
    // Calculate difference
    difference = sellingPrice - costPrice;
    
    // Check if it's profit or loss
    if (difference > 0) {
        // Calculate profit percentage
        percentage = (difference / costPrice) * 100;
        printf("Profit: Rs. %.2f\n", difference);
        printf("Profit Percentage: %.2f%%\n", percentage);
    }
    else if (difference < 0) {
        // Calculate loss percentage
        percentage = (-difference / costPrice) * 100;
        printf("Loss: Rs. %.2f\n", -difference);
        printf("Loss Percentage: %.2f%%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
