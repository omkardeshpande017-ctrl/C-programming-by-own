#include <stdio.h>

int main() {
    int a, d, n; // a = first term of AP, d = common difference, n = term number
    float hp_n;

    printf("Enter the first term of the AP (a): ");
    scanf("%d", &a);
    printf("Enter the common difference of the AP (d): ");
    scanf("%d", &d);
    printf("Enter the term number (n): ");
    scanf("%d", &n);

    hp_n = 1.0 / (a + (n - 1) * d);

    printf("The %dth term of the harmonic progression is: %f\n", n, hp_n);

    return 0;
}
