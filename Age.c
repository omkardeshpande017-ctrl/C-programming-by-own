#include<stdio.h>

int main(){
    int birthYear, currentYear, age;

    // Ask the user for their birth year
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    // Ask the user for the current year
    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    // Calculate age
    age = currentYear - birthYear;

    // Display the result
    printf("your age is : %d\n", age);
    return 0;
}








