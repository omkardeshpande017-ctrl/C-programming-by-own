#include <stdio.h>

int main() {
    int side;
    int volume;
    
    printf("Enter the side length of the cube: ");
    scanf("%d", &side);
    
    volume = side * side * side;
    
    printf("Volume of the cube is: %d\n", volume);
    return 0;
}
