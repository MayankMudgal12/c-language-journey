#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char fname[50];
    char lname[50];
};

int main() {
    struct student s[5];
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("First name: ");
        scanf("%49s", s[i].fname);
        printf("Last name: ");
        scanf("%49s", s[i].lname);
    }

    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(s[i].roll_no > s[j].roll_no) {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n--- Student Records in Ascending Order (by roll_no) ---\n");
    for(i = 0; i < 5; i++) {
        printf("Roll No: %d, First Name: %s, Last Name: %s\n", s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
}
