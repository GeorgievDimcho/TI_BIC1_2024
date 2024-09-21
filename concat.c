#include <stdio.h>
#include <string.h>

int main() {
    // Define two strings
    char str1[100] = "Hello, "; // Make sure str1 has enough space
    char str2[] = "World!";

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Print the concatenated result
    printf("Concatenated String: %s\n", str1);

    return 0;
}

