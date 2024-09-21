#include <stdio.h>

int string_to_int(const char *str) {
    int result = 0;
    int sign = 1;

    // Check for negative numbers
    if (*str == '-') {
        sign = -1;
        str++; // Move to the next character
    }

    // Convert each character to an integer
    while (*str >= '0' && *str <= '9') {
    // https://www.ascii-code.com/
    // The character '0' has an ASCII value of 48
    // If *str is '3', then *str - '0' evaluates to 51 - 48, which equals 3
        result = result * 10 + (*str - '0'); // Update result
        str++; // Move to the next character
    }

    return sign * result; // Return the result with the correct sign
}

int main(int argc, char *argv[]) {
    int a = 0; // Initialize 'a' to avoid using an uninitialized variable

    // Check if the user provided a command line argument
    if (argc > 1) {
        a = string_to_int(argv[1]); // Convert the second argument to an integer
    } else {
        printf("No integer provided. Using default value: %d\n", a);
    }

    printf("argv[0]: %s\n", argv[0]); // Print the name of the program
    printf("Value of a: %d\n", a); // Print the value of 'a'

    return 0;
}

