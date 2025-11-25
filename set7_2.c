#include <stdio.h>

int main() {
    int   a[] = {10, 20, 30};
    float b[] = {1.1f, 2.2f, 3.3f};
    char  c[] = {'A', 'B', 'C'};

    int   *pInt = a;
    float *pFloat = b;
    char  *pChar = c;

    printf("Initial addresses and values:\n");
    printf("pInt   = %p, *pInt   = %d\n", (void *)pInt, *pInt);
    printf("pFloat = %p, *pFloat = %.1f\n", (void *)pFloat, *pFloat);
    printf("pChar  = %p, *pChar  = %c\n\n", (void *)pChar, *pChar);

    pInt++;
    pFloat++;
    pChar++;

    printf("After incrementing by 1:\n");
    printf("pInt   = %p, *pInt   = %d\n", (void *)pInt, *pInt);
    printf("pFloat = %p, *pFloat = %.1f\n", (void *)pFloat, *pFloat);
    printf("pChar  = %p, *pChar  = %c\n\n", (void *)pChar, *pChar);

    pInt--;
    pFloat--;
    pChar--;

    printf("After decrementing by 1:\n");
    printf("pInt   = %p, *pInt   = %d\n", (void *)pInt, *pInt);
    printf("pFloat = %p, *pFloat = %.1f\n", (void *)pFloat, *pFloat);
    printf("pChar  = %p, *pChar  = %c\n", (void *)pChar, *pChar);

    return 0;
}
