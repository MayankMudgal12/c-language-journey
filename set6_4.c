#include <stdio.h>

struct employee {
    char name[100];
    char address[200];
    int age;
    float salary;
};

int main() {
    int n, i;
    float sum = 0.0, avg;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee e[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i+1);

        printf("Name: ");
        scanf("%99s", e[i].name);

        printf("Address: ");
        scanf("%199s", e[i].address);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        sum += e[i].salary;
    }

    avg = sum / n;

    printf("\nAverage Salary = %.2f\n", avg);

    return 0;
}
