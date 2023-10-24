#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the inverted pyramid: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; --i) {
        for (int spaces = 0; spaces < rows - i; ++spaces) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
