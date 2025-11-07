#include <stdio.h>

int main() {
    int radius, height;
    float pi = 3.14, volume;

    printf("Enter the value of radius: ");
    scanf("%d", &radius);
    printf("Enter the value of height: ");
    scanf("%d", &height);

    volume = pi * radius * radius * height;

    printf("The volume of the cylinder is %.2f\n", volume);

    return 0;
}
