#include <stdio.h>

// Define the student structure
struct student {
    char name[100];
    int roll;
    float mark;
};

int main() {
    struct student s;

    printf("Enter name: ");
    scanf("%99s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.mark);

    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Mark : %.2f\n", s.mark);

    return 0;
}
