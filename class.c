#include <stdio.h>

int main() {
    float income;

    printf("Enter your annual income in INR: ");
    scanf("%f", &income);

    if (income < 0) {
        printf("Invalid income amount.\n");
    } else if (income < 300000) {
        printf("You are classified as Poor.\n");
    } else if (income >= 300000 && income < 1000000) {
        printf("You are classified as Middle Class.\n");
    } else {
        printf("You are classified as Rich.\n");
    }

    return 0;
}
