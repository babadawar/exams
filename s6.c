#include <stdio.h>

int main() {
    int n, count = 1, i, j;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (i = 1; count <= n; i++) {
        for (j = 0; j < i && count <= n; j++) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");

    return 0;
}
