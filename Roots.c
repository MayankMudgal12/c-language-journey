#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter a b c: ");
    if (scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    if (a == 0) {
        if (b != 0) printf("Linear root: %lf\n", -c/b);
        else printf("Not an equation.\n");
        return 0;
    }
    double D = b*b - 4*a*c;
    if (D > 0) {
        printf("Two real roots: %lf and %lf\n", (-b + sqrt(D)) / (2*a), (-b - sqrt(D)) / (2*a));
    } else if (D == 0) {
        printf("One real root: %lf\n", -b/(2*a));
    } else {
        double re = -b/(2*a), im = sqrt(-D)/(2*a);
        printf("Complex roots: %lf + %lfi and %lf - %lfi\n", re, im, re, im);
    }
    return 0;
}
