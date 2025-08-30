#include <stdio.h>
#include <math.h>

int main() {
    int num, originalnum,sum, d1 ,d2, d3;
    printf("enter the number: ");
    scanf("%d", &num);

    originalnum = num;

    d1 = num%10;
    num = num/10;

    d2 = num%10;
    num = num/10;

    d3 = num%10;
    num = num/10;

    sum = pow(d1,3) + pow(d2,3) + pow(d3,3);

    if ( originalnum == sum){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
    return 0;

}