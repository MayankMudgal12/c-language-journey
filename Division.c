#include <stdio.h>

int main() {
    int a, b;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);
    if (b == 0) { printf("Error: division by zero\n"); return 0; }
    printf("Quotient = %d, Remainder = %d\n", a / b, a % b);
    return 0;
}
