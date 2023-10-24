#include <stdio.h>

#define MAX 10

int main() {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX], product[MAX][MAX];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
            
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
            
        }
    }

    // Addition of matrices
    printf("Sum of the matrices is:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Multiplication of matrices
    printf("Product of the matrices is:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
