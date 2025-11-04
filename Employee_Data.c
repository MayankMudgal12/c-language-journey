#include <stdio.h>

struct Employee {
    char name[50];
    char id[20];
    char dept[50];
    double salary;
};

void input_employee(struct Employee *e) {
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter ID: ");
    scanf("%s", e->id);
    printf("Enter department: ");
    scanf("%s", e->dept);
    printf("Enter salary: ");
    scanf("%lf", &e->salary);
}

void display_employee(struct Employee e) {
    printf("\nName: %s\nID: %s\nDepartment: %s\nSalary: %.2f\n",
           e.name, e.id, e.dept, e.salary);
}

int main() {
    struct Employee emp[100];
    int count = 0, choice;

    while (1) {
        printf("\n1. Enter new employee\n2. Display all employees\n3. Exit\nChoose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            input_employee(&emp[count]);
            count++;
        } else if (choice == 2) {
            if (count == 0)
                printf("No employee records.\n");
            else
                for (int i = 0; i < count; i++)
                    display_employee(emp[i]);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}