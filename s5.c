#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Series: ");
    int term = 2;
    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        term *= 2;
    }
    printf("\n");

    return 0;
}
