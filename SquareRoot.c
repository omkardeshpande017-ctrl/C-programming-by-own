#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    // Input from user
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Check if the number is non-negative
    if (number >= 0) {
        // Calculate the square root
        squareRoot = sqrt(number);
        printf("Square root of %.2f = %.2f\n", number, squareRoot);
    } else {
        printf("Error: Cannot calculate square root of a negative number.\n");
    }

    return 0;
}
