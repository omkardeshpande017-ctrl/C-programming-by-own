#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, number;
    
    printf("Enter how many numbers you want to calculate average of: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        sum += number;
    }
    
    float average = sum / n;
    printf("Average of the %d numbers is: %.2f\n", n, average);
    
    return 0;
}
