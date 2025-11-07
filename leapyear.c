/*
 * leapyear.c
 * Simple program to check whether a given year is a leap year.
 *
 * Rules:
 * - A year is a leap year if it is divisible by 4,
 *   except years divisible by 100 are not leap years,
 *   unless they are also divisible by 400.
 *
 * Compile:
 *   gcc "leapyear.c" -o leapyear
 * Run:
 *   ./leapyear
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long year;
	int scanned;

	printf("Enter a year (e.g., 2024): ");
	scanned = scanf("%ld", &year);
	if (scanned != 1) {
		fprintf(stderr, "Invalid input. Please enter an integer year.\n");
		return 1;
	}

	if (year <= 0) {
		printf("%ld is not a valid positive year.\n", year);
		return 0;
	}

	if ((year % 400) == 0 || ((year % 4) == 0 && (year % 100) != 0)) {
		printf("%ld is a leap year.\n", year);
	} else {
		printf("%ld is not a leap year.\n", year);
	}

	return 0;
}

