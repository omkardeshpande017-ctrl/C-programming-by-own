#include <stdio.h>

int main() {
    float side, area;
    
    // Get the side length from user
    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    
    // Calculate the area
    area = side * side;
    
    // Display the result
    printf("Area of the square = %.2f square units\n", area);
    
    return 0;
}
