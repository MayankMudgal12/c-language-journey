#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <time.h>
#include <math.h>
#include <string.h>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for(int i = 0; i < count; i++) total += va_arg(args, int);
    va_end(args);
    return total;
}

int main() {
    printf("Character check using ctype: %d\n", isdigit('5'));

    int *ptr = malloc(sizeof(int));
    *ptr = 20;
    printf("Dynamic memory value: %d\n", *ptr);
    free(ptr);

    assert(5 > 0);

    printf("Sum using stdarg: %d\n", sum(4, 1, 2, 3, 4));

    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));

    double val = 16.0;
    printf("Square root using math: %.2f\n", sqrt(val));

    char str1[20] = "Hello ";
    char str2[] = "World";
    strcat(str1, str2);
    printf("String concat using string.h: %s\n", str1);

    return 0;
}
