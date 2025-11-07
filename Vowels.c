/*
 * Vowels.c
 *
 * Simple utility to check vowels and consonants.
 * Behavior:
 *  - If user inputs a single character: prints whether it's a vowel, consonant, or neither.
 *  - If user inputs a string: counts and prints number of vowels and consonants in the string.
 *
 * Compile: gcc -std=c11 -Wall -Wextra -o Vowels Vowels.c
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_vowel(char c) {
    char lower = (char) tolower((unsigned char)c);
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

int main(void) {
    char buf[1024];

    printf("Enter a character or a string (press Enter): ");
    if (!fgets(buf, sizeof(buf), stdin)) {
        return 0;
    }

    /* remove trailing newline */
    size_t len = strlen(buf);
    if (len > 0 && buf[len-1] == '\n') buf[len-1] = '\0';

    len = strlen(buf);
    if (len == 0) {
        printf("No input provided.\n");
        return 0;
    }

    if (len == 1) {
        char c = buf[0];
        if (isalpha((unsigned char)c)) {
            if (is_vowel(c))
                printf("'%c' is a vowel.\n", c);
            else
                printf("'%c' is a consonant.\n", c);
        } else {
            printf("'%c' is neither a vowel nor a consonant.\n", c);
        }
        return 0;
    }

    /* For longer input, count vowels and consonants */
    int vowels = 0, consonants = 0;
    for (size_t i = 0; i < len; ++i) {
        char c = buf[i];
        if (isalpha((unsigned char)c)) {
            if (is_vowel(c)) ++vowels;
            else ++consonants;
        }
    }

    printf("Input: \"%s\"\n", buf);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
