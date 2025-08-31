#include <stdio.h>

int main() {
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
     
    int i = 1;
    int sum = 0;
    do{
         sum = sum +i;
        i+=1;
         
    }while(i <= n);

    printf("%d\n", sum); 

    return 0;
}