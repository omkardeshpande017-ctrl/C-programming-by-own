#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, c;
    
    printf("\nPythagorean Theorem Calculator\n");
    printf("1. Find hypotenuse (c) given sides a and b\n");
    printf("2. Find side a given hypotenuse c and side b\n");
    printf("3. Find side b given hypotenuse c and side a\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter side a: ");
            scanf("%lf", &a);
            printf("Enter side b: ");
            scanf("%lf", &b);
            if(a <= 0 || b <= 0) {
                printf("Error: Sides must be positive numbers!\n");
                return 1;
            }
            c = sqrt(a*a + b*b);
            printf("The hypotenuse (c) is: %.2f\n", c);
            break;
            
        case 2:
            printf("Enter hypotenuse c: ");
            scanf("%lf", &c);
            printf("Enter side b: ");
            scanf("%lf", &b);
            if(c <= 0 || b <= 0) {
                printf("Error: Sides must be positive numbers!\n");
                return 1;
            }
            if(b >= c) {
                printf("Error: Hypotenuse must be greater than side b!\n");
                return 1;
            }
            a = sqrt(c*c - b*b);
            printf("Side a is: %.2f\n", a);
            break;
            
        case 3:
            printf("Enter hypotenuse c: ");
            scanf("%lf", &c);
            printf("Enter side a: ");
            scanf("%lf", &a);
            if(c <= 0 || a <= 0) {
                printf("Error: Sides must be positive numbers!\n");
                return 1;
            }
            if(a >= c) {
                printf("Error: Hypotenuse must be greater than side a!\n");
                return 1;
            }
            b = sqrt(c*c - a*a);
            printf("Side b is: %.2f\n", b);
            break;
            
        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            return 1;
    }
    
    return 0;
}
 