#include <stdio.h>

int main() {
    char op;
    long long a, b;
    printf("Enter: a op b  (e.g. 5 + 3)\n");
    if (scanf("%lld %c %lld", &a, &op, &b) != 3) return 0;
    switch (op) {
        case '+': printf("%lld\n", a + b); break;
        case '-': printf("%lld\n", a - b); break;
        case '*': printf("%lld\n", a * b); break;
        case '/':
            if (b == 0) printf("Division by zero\n");
            else printf("%lld\n", a / b);
            break;
        case '%':
            if (b == 0) printf("Mod by zero\n");
            else printf("%lld\n", a % b);
            break;
        default: printf("Unknown operator\n");
    }
    return 0;
}
