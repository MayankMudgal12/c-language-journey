#include <stdio.h>

int main() {
    char alpha;
    printf("enter the character");
    scanf("%s", &alpha);

    if ( alpha >= 'A' && alpha <= 'Z') {
        printf("character is in upercase");
    }
    else{ 
        printf("character is not in uppercase");
    }
    return 0;
}