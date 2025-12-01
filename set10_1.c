#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((a) / (b))

int main() {
    int x = 20, y = 5;

    printf("Addition: %d\n", ADD(x, y));
    printf("Subtraction: %d\n", SUB(x, y));
    printf("Multiplication: %d\n", MUL(x, y));
    printf("Division: %d\n", DIV(x, y));

    return 0;
}
