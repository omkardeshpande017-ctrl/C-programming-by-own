#include <stdio.h>

int main() {
    int a, d, n;
    int sum;

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    // Applying the sum formula for A.P.
    sum = (n * (2 * a + (n - 1) * d)) / 2;

    printf("Sum of the first %d terms of the A.P. series is: %d\n", n, sum);

    return 0;
}
