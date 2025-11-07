#include <stdio.h>

int main() {
    int a, d, n, nth_term;

    // Input the first term, common difference, and the term number
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the term number (n): ");
    scanf("%d", &n);

    // Calculate nth term of AP: nth_term = a + (n-1)*d
    nth_term = a + (n - 1) * d;

    // Output the nth term
    printf("The %dth term of the AP is: %d\n", n, nth_term);

    return 0;
}
