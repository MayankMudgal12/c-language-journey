#include <stdio.h>

void display_student(char name[], int roll, float marks) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", name, roll, marks);
}

int main() {
    char name[100];
    int roll;
    float marks;
    printf("Enter name (single word): ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);
    display_student(name, roll, marks);
    return 0;
}