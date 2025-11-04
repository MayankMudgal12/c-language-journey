#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("%d is even\n", n) : printf("%d is odd\n", n);
    return 0;
}
