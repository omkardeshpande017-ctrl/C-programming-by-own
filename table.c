#include <stdio.h>

int main() {
    int number, range;
    
    // Get input from user
    printf("Enter the number for multiplication table: ");
    scanf("%d", &number);
    
    printf("Enter the range (how far to calculate): ");
    scanf("%d", &range);
    
    // Print header
    printf("\nMultiplication Table for %d\n", number);
    
    
    // Generate and print the table
    for(int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}
