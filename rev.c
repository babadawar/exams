#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter a natural number: ");
    scanf("%u", &number);

    printf("Digits in reverse order: ");
    while (number > 0) {
        printf("%u ", number % 10);
        number /= 10;
    }
    printf("\n");

    return 0;
}
