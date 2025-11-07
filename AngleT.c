#include <stdio.h>

int main() {
    float angle1, angle2, angle3, sum;
    
    // Input angles from user
    printf("Enter three angles of triangle:\n");
    printf("Enter first angle: ");
    scanf("%f", &angle1);
    printf("Enter second angle: ");
    scanf("%f", &angle2);
    printf("Enter third angle: ");
    scanf("%f", &angle3);
    
    // Calculate sum of angles
    sum = angle1 + angle2 + angle3;
    
    // Check if the angles form a valid triangle
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("\nThese angles can form a triangle!\n");
        printf("Sum of angles = %.2f degrees\n", sum);
    } else {
        printf("\nThese angles cannot form a triangle!\n");
        printf("Note: Sum of angles in a triangle must be 180 degrees\n");
        printf("and each angle must be greater than 0 degrees.\n");
    }
    
    return 0;
}
