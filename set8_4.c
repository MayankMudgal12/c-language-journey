#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, new_n;
    char *str;

    printf("Enter initial size of the string (including null character): ");
    scanf("%d", &n);
    getchar();

    str = (char*) malloc(n * sizeof(char));
    if(str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string (up to %d characters): ", n-1);
    fgets(str, n, stdin);

    printf("You entered: %s", str);

    printf("Enter new size of the string (larger than %d): ", n);
    scanf("%d", &new_n);
    getchar(); 

    str = (char*) realloc(str, new_n * sizeof(char));
    if(str == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter additional characters to append (up to %d chars): ", new_n - n);
    fgets(str + strlen(str), new_n - strlen(str), stdin);

    printf("Expanded string: %s", str);

    free(str);
    return 0;
}
