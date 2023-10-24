#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}

