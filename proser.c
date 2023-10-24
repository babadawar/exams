#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of the series: %llu\n", product);

    return 0;
}
