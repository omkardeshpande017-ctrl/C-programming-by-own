#include <stdio.h>
int main() {
    int number, cube = 1, i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate cube using repeated multiplication with for loop
    for (i = 1; i <= 3; i++) {
        cube *= number;
    }

    printf("Cube of %d is %d\n", number, cube);

    return 0;
}
