#include <stdio.h>

int main() {
    int n, i;
    float resistance, total_resistance = 0.0;

    printf("Enter the number of resistors in series: ");
    scanf("%d", &n);

    printf("Enter the value of each resistor (in Ohms):\n");
    for (i = 1; i <= n; i++) {
        printf("Resistor %d: ", i);
        scanf("%f", &resistance);
        // Add the current resistance to the total
        total_resistance += resistance; 
    }

    printf("\nTotal Series Resistance: %.2f Ohms\n", total_resistance);
    
    return 0;
}