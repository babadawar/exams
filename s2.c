#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Series: ");
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of the series: %d\n", sum);

    return 0;
}
