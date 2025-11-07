/* AreaR.c
 * Calculate area of a rectangle.
 * Reads length and breadth (floating point), validates input, and prints area.
 */
#include <stdio.h>

int main(void) {
	double length, breadth;
	printf("Enter length and breadth separated by space: ");
	if (scanf("%lf %lf", &length, &breadth) != 2) {
		fprintf(stderr, "Invalid input. Expected two numbers.\n");
		return 1;
	}
	if (length < 0 || breadth < 0) {
		fprintf(stderr, "Length and breadth must be non-negative.\n");
		return 1;
	}
	double area = length * breadth;
	printf("Area of rectangle: %.2f\n", area);
	return 0;
}

