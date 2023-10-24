#include <stdio.h>

int main() {
    int rows, spaces;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
