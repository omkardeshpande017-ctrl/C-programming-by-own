#include <stdio.h>

int main() {
    float income;

    printf("Enter your annual income in INR: ");
    scanf("%f", &income);

    if (income < 0) {
        printf("Invalid income amount.\n");
    } else if (income <= 250000) {
        printf("No tax. Income is within tax-free limit.\n");
    } else if (income <= 500000) {
        printf("Income is in 5%% tax bracket.\n");
    } else if (income <= 1000000) {
        printf("Income is in 20%% tax bracket.\n");
    } else {
        printf("Income is in 30%% tax bracket.\n");
    }

    return 0;
}
