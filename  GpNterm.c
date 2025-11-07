#include <stdio.h>
#include <math.h>

int nthTerm(int a, int r, int n) {
    return a * (int)pow(r, n - 1);
}

int main() {
    int a, r, n;
    
    printf("Enter first term (a): ");
    scanf("%d", &a);
    
    printf("Enter common ratio (r): ");
    scanf("%d", &r);
    
    printf("Enter term number (n): ");
    scanf("%d", &n);
    
    printf("The %dth term of the GP is: %d\n", n, nthTerm(a, r, n));
    
    return 0;
}
