#include <stdio.h>

int main() {
    int a, b;
    float result;
    char ch;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Adding a space before %c to consume the newline character
    printf("Enter the operator: ");
    scanf(" %c", &ch);

    switch (ch) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '%':
            if (b == 0) {
                printf("Cannot perform modulo with 0.\n");
                return 0;
            }
            result = a % b;
            break;

        default:
            printf("Invalid operation.\n");
            return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
