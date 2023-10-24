#include<stdio.h>

void cbv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("%d%d", a, b);
}

void cbr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d%d", *a, *b);
}

int main() {
    int m, p;
    printf("Enter two numbers: ");
    scanf("%d%d", &m, &p);
    cbv(m, p);
    cbr(&m, &p);
    return 0;
}
