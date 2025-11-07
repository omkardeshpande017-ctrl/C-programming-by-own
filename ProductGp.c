#include <stdio.h>
#include <math.h>

double productOfGP(double a, double r, int n) {
    return pow(a, n) * pow(r, n * (n - 1) / 2);
}

int main() {
    double a, r;
    int n;

    printf("Enter the first term (a) of the GP: ");
    scanf("%lf", &a);

    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double product = productOfGP(a, r, n);
    printf("Product of %d terms in the GP is: %lf\n", n, product);

    return 0;
}
