#include <stdio.h>

int main() {
    int n, prod = 1;
    printf("enter the number");
    scanf("%d", &n);
    for(int i=n; i >=1; i--){
        prod = prod*i;

    }
    printf("%d", prod);
    return 0;
}