#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    
    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    // Input rate of interest
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    
    // Input time period in years
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    
    // Convert rate to decimal
    rate = rate / 100;
    
    // Calculate compound interest using the formula: A = P(1 + r)^t
    compoundInterest = principal * (pow(1 + rate, time) - 1);
    
    // Display the results
    printf("\nPrincipal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate * 100);
    printf("Time Period: %.2f years\n", time);
    printf("Compound Interest: %.2f\n", compoundInterest);
    printf("Total Amount: %.2f\n", principal + compoundInterest);
    
    return 0;
}
