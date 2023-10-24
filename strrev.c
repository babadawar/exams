#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    int length = 0;

    // Calculate the length of the string by counting characters until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\nLength of the string: %d\n", length);

    return 0;
}
