#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("\nScientific Calculator\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Sin(x)\n");
    printf("6. Cos(x)\n");
    printf("7. Tan(x)\n");
    printf("8. Log(x)\n");
    printf("9. Square root\n");
    printf("10. Power\n");
    printf("11. Exit\n");
}

int main() {
    int choice;
    double num1, num2, result;
    const double PI = 3.14159265;

    do {
        displayMenu();
        printf("\nEnter your choice (1-11): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Addition
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 2: // Subtraction
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 3: // Multiplication
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 4: // Division
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;

            case 5: // Sin
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = sin(num1 * PI / 180.0);
                printf("Sin(%.2lf) = %.2lf\n", num1, result);
                break;

            case 6: // Cos
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = cos(num1 * PI / 180.0);
                printf("Cos(%.2lf) = %.2lf\n", num1, result);
                break;

            case 7: // Tan
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = tan(num1 * PI / 180.0);
                printf("Tan(%.2lf) = %.2lf\n", num1, result);
                break;

            case 8: // Log (base e)
                printf("Enter number: ");
                scanf("%lf", &num1);
                if(num1 > 0) {
                    result = log(num1);
                    printf("Log(%.2lf) = %.2lf\n", num1, result);
                } else {
                    printf("Error: Invalid input for logarithm!\n");
                }
                break;

            case 9: // Square root
                printf("Enter number: ");
                scanf("%lf", &num1);
                if(num1 >= 0) {
                    result = sqrt(num1);
                    printf("Square root of %.2lf = %.2lf\n", num1, result);
                } else {
                    printf("Error: Cannot calculate square root of negative number!\n");
                }
                break;

            case 10: // Power
                printf("Enter base number: ");
                scanf("%lf", &num1);
                printf("Enter exponent: ");
                scanf("%lf", &num2);
                result = pow(num1, num2);
                printf("%.2lf raised to power %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 11: // Exit
                printf("Thank you for using the Scientific Calculator!\n");
                break;

            default:
                printf("Invalid choice! Please enter a number between 1 and 11.\n");
        }
    } while(choice != 11);

    return 0;
}
