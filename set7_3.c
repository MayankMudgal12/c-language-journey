#include <stdio.h>

void modifyValues(int *pInt, float *pFloat, char *pChar) {
    *pInt = 100;       
    *pFloat = 9.99f;    
    *pChar = 'Z';       
}

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'X';

    printf("Before modifyValues:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    modifyValues(&a, &b, &c);

    printf("After modifyValues:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}
