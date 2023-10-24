#include <stdio.h>

int main() {
    int limit;
    int isPrime;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are: ", limit);
    for (int num = 2; num <= limit; num++) {
        isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
