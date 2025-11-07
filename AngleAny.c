#include <stdio.h>

int main() {
    int n;
    int sum_of_angles;
    float interior_angle;

    // 1. Get user input for the number of sides
    printf("Enter the number of sides of the polygon (3 for triangle, 4 for quadrilateral, etc.): ");
    scanf("%d", &n);

    // 2. Validate the input (a polygon must have 3 or more sides)
    if (n < 3) {
        printf("A polygon must have 3 or more sides. Invalid input.\n");
        return 1; // Indicate an error
    }

    // 3. Calculate the sum of interior angles: Sum = (n - 2) * 180
    sum_of_angles = (n - 2) * 180;

    // 4. Calculate the interior angle (assuming it is a regular polygon)
    // Note: Type casting is important for floating-point division
    interior_angle = (float)sum_of_angles / n;

    // 5. Display the results
    printf("\n--- Polygon Angle Calculation ---\n");
    printf("Number of Sides (n): %d\n", n);
    printf("Sum of Interior Angles: *%d degrees*\n", sum_of_angles);
    printf("Measure of Each Interior Angle (for a regular polygon): *%.2f degrees*\n", interior_angle);
    

    return 0;
}