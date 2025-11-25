#include <stdio.h>

int main() {
    int   a = 10;
    float b = 3.14f;
    char  c = 'X';

    int   *pInt   = &a;  
    float *pFloat = &b;   
    char  *pChar  = &c;   

    printf("Address stored in pInt   = %p\n", (void *)pInt);
    printf("Address stored in pFloat = %p\n", (void *)pFloat);
    printf("Address stored in pChar  = %p\n", (void *)pChar);

    printf("Value of a using *pInt   = %d\n", *pInt);
    printf("Value of b using *pFloat = %f\n", *pFloat);
    printf("Value of c using *pChar  = %c\n", *pChar);

    return 0;
}
