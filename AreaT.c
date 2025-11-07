#include <stdio.h>

int main() {
    float base, height, area;
    
    // Get input from user
    printf("Enter the base of triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of triangle: ");
    scanf("%f", &height);
    
    // Calculate area
    area = 0.5 * base * height;
    
    // Display result
    printf("Area of triangle = %.2f square units\n", area);
    
    return 0;
}
