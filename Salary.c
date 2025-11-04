#include <stdio.h>

float  monthly_salary(float basic, int is_metro) {
    float  hra = basic * (is_metro ? 0.15 : 0.10);
    float da = basic * 0.05;
    return basic + hra + da;
}

int main() {
    double basic;
    int metro;
    printf("Enter basic salary: ");
    scanf("%lf", &basic);
    printf("Metro city? (1 = yes, 0 = no): ");
    scanf("%d", &metro);
    printf("Monthly salary = %.2f\n", monthly_salary(basic, metro));
    return 0;
}
