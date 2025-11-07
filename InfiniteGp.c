#include <stdio.h>

int main() {
    double a, r, sum_infinite;
    
    printf("Enter first term (a): ");
    scanf("%lf", &a);
    
    printf("Enter common ratio (r): ");
    scanf("%lf", &r);
    
    if (r > -1 && r < 1) {
        sum_infinite = a / (1 - r);
        printf("Sum of infinite GP is: %.2lf\n", sum_infinite);
    } else {
        printf("Sum to infinity is not defined for |r| >= 1\n");
    }
    
    return 0;
}
