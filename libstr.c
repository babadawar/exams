#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // strlen: finding the length of a string
    printf("Length of str1: %d\n", strlen(str1));
    printf("Length of str2: %d\n", strlen(str2));

    // strcpy: copying one string to another
    strcpy(str3, str1);
    printf("str3 after copying str1: %s\n", str3);

    // strcat: concatenating two strings
    strcat(str1, str2);
    printf("str1 after concatenation: %s\n", str1);

    // strcmp: comparing two strings
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    // strrev: reversing a string
    printf("Reversed str3: %s\n", strrev(str3));

    return 0;
}
