#include <stdio.h>
#define PI 3.14159

float area(float r){
    return PI * r * r;
}

int main() {
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = area(r);
    printf("Area: %f\n", a);
    return 0;
}