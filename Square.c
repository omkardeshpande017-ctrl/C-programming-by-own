#include <stdio.h>

int main() {
    float number, square;
    
    // Input from user
    printf("Enter a number to find its square: ");
    scanf("%f", &number);
    
    // Calculate square
    square = number * number;
    
    // Display result
    printf("Square of %.2f is %.2f\n", number, square);
    
    return 0;
}
