#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    int result = factorial(number);
    printf("Factorial of %d = %d\n", number, result);

    return 0;
}

